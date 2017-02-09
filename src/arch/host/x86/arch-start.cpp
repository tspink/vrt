/**
 * arch/host/x86/arch-start.cpp
 * 
 * CAPTIVE Virtual Runtime
 * 
 * Copyright (C) University of Edinburgh 2017.  All Rights Reserved.
 * Tom Spink <tspink@inf.ed.ac.uk>
 */
#include <vrt/mem/mem.h>
#include <vrt/runtime/environment.h>
#include <vrt/util/debug.h>
#include <vrt/util/memops.h>
#include <arch/host/host-architecture.h>
#include <arch/host/x86/multiboot.h>
#include <arch/guest/guest-architecture.h>

extern char _BSS_START, _BSS_END;

/**
 * Zeroes out the BSS section of the VRT image.
 */
static void zero_bss()
{
	vrt::util::bzero(&_BSS_START, (&_BSS_END - &_BSS_START));
}

extern void (*__init_array_start []) (void);
extern void (*__init_array_end []) (void);

/**
 * Runs the static constructors.
 */
static void run_static_ctors()
{
	size_t size = __init_array_end - __init_array_start;

	for (unsigned int i = 0; i < size; i++) {
		(*__init_array_start[i])();
	}
}

/**
 * Updates the initial page tables, by removing the lower memory mapping and
 * inserting more entries into the upper address space.
 */
static void update_init_pgt()
{
	typedef uint64_t pte_t;
	typedef pte_t *ptep_t;
	
	uintptr_t cr3;
	asm volatile("mov %%cr3, %0" : "=r"(cr3));
	
	// Convert the physical pml4 address into a virtual address,
	// so that we can manipulate the table.
	ptep_t pte = (ptep_t)(__phys_to_virt(cr3));
	
	// Remove the lower page table mapping (this frees up pages 0x2000 + 0x3000)
	pte[0] = 0;
	
	// Insert more entries into the higher mapping
	pte = (ptep_t)(__phys_to_virt(0x5000));
	
	for (unsigned int i = 0; i < 0x200; i++) {
		phys_addr_t base = 0x200000 * i;
		pte[i] = (pte_t)(base | 0x83);
	}
	
	// Flush the page table
	asm volatile("mov %0, %%cr3" :: "r"(cr3));
}

using namespace vrt;
using namespace vrt::arch::host;
using namespace vrt::arch::host::x86;
using namespace vrt::arch::guest;
using namespace vrt::mem;
using namespace vrt::util;

static char cmdline[256];

static bool mb_parse(struct MultibootInfo *multiboot_info)
{
	// Figure out what memory is available
	struct MultibootMMAPEntry *mmap_entry = (struct MultibootMMAPEntry *)__phys_to_virt(multiboot_info->mmap_addr);
		
	struct MultibootMMAPEntry *mmap_entry_end = (struct MultibootMMAPEntry *)(__phys_to_virt(multiboot_info->mmap_addr + multiboot_info->mmap_length));
	while (mmap_entry < mmap_entry_end) {
		
		switch (mmap_entry->type) {
		case MULTIBOOT_MEMORY_AVAILABLE:
			mm.register_physical_memory(mmap_entry->addr, mmap_entry->len);
			break;
		}		
		
		mmap_entry++;
	}
	
	// Store the command-line
	strncpy(cmdline, (const char *)__phys_to_virt(multiboot_info->cmdline), sizeof(cmdline)-1);
	cmdline[255] = 0;

	dprintf(DebugLevel::INFO, "command-line: %s\n", cmdline);
	
	return true;
}

/**
 * Main C++ entrypoint after coming in from assembly-language land.  At this point,
 * the system is running in 64-bit mode with a (semi-)temporary page table.
 * @param multiboot_info_ptr
 */
extern "C" __noreturn __noinline void x86_arch_start(phys_addr_t multiboot_info_phys_ptr)
{
	// (1) Zero the BSS section, so that uninitialised globals are correctly
	// initialised to zero.
	zero_bss();
	
	// (2) Run the static constructors.
	run_static_ctors();
	
	// (3) Update the initial page tables, so we get access to more memory.
	update_init_pgt();
	
	dprintf(DebugLevel::DEBUG, "Starting Captive VRT...\n");
	
	// Parse the multiboot information structure.
	struct MultibootInfo *mbi = (struct MultibootInfo *)(__phys_to_virt(multiboot_info_phys_ptr));
	if (!mb_parse(mbi)) {
		dprintf(DebugLevel::FATAL, "Unable to read multiboot information structure\n");
		host_arch->abort();
	}

	// Now, initialise the memory management subsystem.
	if (!mm.init()) {
		dprintf(DebugLevel::FATAL, "Memory subsystem initialisation failed!\n");
		host_arch->abort();
	}
		
	// Create and run the environment.
	runtime::Environment *env = guest_arch->create_environment();
	
	if (!env) {
		dprintf(DebugLevel::FATAL, "Environment failed to be created!\n");
		host_arch->abort();
	}
		
	if (!env->run()) {
		dprintf(DebugLevel::FATAL, "Environment failed to run!\n");
	}
	
	for (;;) {
		asm volatile("hlt");
		asm volatile("pause");
	}
}
