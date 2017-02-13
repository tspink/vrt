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
#include <vrt/runtime/main.h>
#include <vrt/util/debug.h>
#include <vrt/util/memops.h>
#include <arch/host/x86/x86-host-architecture.h>
#include <arch/host/x86/multiboot.h>
#include <arch/host/x86/cpuid.h>
#include <arch/guest/guest-architecture.h>

using namespace vrt;
using namespace vrt::arch::host;
using namespace vrt::arch::host::x86;
using namespace vrt::arch::guest;
using namespace vrt::mem;
using namespace vrt::util;

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
 * Makes sure the host architecture supports the necessary capabilities.
 */
static void check_arch_caps()
{
	auto features = cpuid_get_features();
	
	if (!(features.rdx & CPUIDFeatures::PAE)) {
		fatal("CPU does not support PAE");
	}
}

// Starting address to allocate initial page tables from;
static uintptr_t _init_pgt_start = 0x10000;
static const uintptr_t _init_pgt_end = 0x20000;

/**
 * Allocates an initial page table.
 * @return A virtual pointer to the page table.
 */
static void *alloc_init_pgt()
{
	assert(_init_pgt_start < _init_pgt_end);
	
	void *next = (void *)__phys_to_upper_virt(_init_pgt_start);
	_init_pgt_start += 0x1000;
	
	vrt::util::pzero(next, 1);
	return next;
}

/**
 * Updates the initial page tables, by removing the lower memory mapping and
 * inserting more entries into the upper address space.
 */
static void update_init_pgt()
{
	typedef uint64_t pte_t;
	typedef pte_t *ptep_t;
	
	ptep_t pml4_A = (ptep_t)alloc_init_pgt();	// This is the guest LOW64 page table
	ptep_t pml4_B = (ptep_t)alloc_init_pgt();	// This is the guest HIGH64 page table
	
	// Tell the host architecture manager about the two address spaces.
	x86_host_arch.set_address_spaces(__upper_virt_to_phys(pml4_A), __upper_virt_to_phys(pml4_B));
	
	ptep_t pdp0 = (ptep_t)alloc_init_pgt();
	ptep_t pd0 = (ptep_t)alloc_init_pgt();
	ptep_t pd1 = (ptep_t)alloc_init_pgt();
	
	// Initialise PML4-A and PML4-B with the same upper pointers.
	pml4_A[0x1ff] = __upper_virt_to_phys(pdp0) | 0x103;
	pml4_B[0x1ff] = __upper_virt_to_phys(pdp0) | 0x103;
	
	pdp0[0x1fe] = __upper_virt_to_phys(pd0) | 0x103;
	pdp0[0x1ff] = __upper_virt_to_phys(pd1) | 0x103;
	
	// Map the entire -2GB VMEM space 1:1 to Physical Memory
	for (unsigned int i = 0; i < 0x200; i++) {
		phys_addr_t base = 0x200000 * i;
		pd0[i] = (pte_t)(base | 0x183);
	}
	
	for (unsigned int i = 0; i < 0x200; i++) {
		phys_addr_t base = 0x200000 * (i + 0x200);
		pd1[i] = (pte_t)(base | 0x183);
	}
	
	// Map lots of physical memory from the 48-bit split.
	ptep_t pdp1 = (ptep_t)alloc_init_pgt();
	pml4_A[0x100] = __upper_virt_to_phys(pdp1) | 0x103;
	pml4_B[0x100] = __upper_virt_to_phys(pdp1) | 0x103;

	// Map 8 GB of physical memory, using 8 * 512 * 2MB pages.
	for (unsigned int pdp_index = 0; pdp_index < 8; pdp_index++) {
		// Allocate a page descriptor table.
		ptep_t pd = (ptep_t)alloc_init_pgt();
		
		// Insert the PD into the PDP, with PRESENT + WRITE permissions.
		pdp1[pdp_index] = __upper_virt_to_phys(pd) | 0x103;		
		
		// Install a 1 GB mapping, using 512 * 2MB pages.
		for (unsigned int pd_index = 0; pd_index < 0x200; pd_index++) {
			phys_addr_t base = 0x200000 * (pd_index + (pdp_index * 0x200));
			pd[pd_index] = (pte_t)(base | 0x183);
		}
	}
		
	// Flush the page table
	asm volatile("mov %0, %%cr3" :: "r"(__upper_virt_to_phys(pml4_A)));
	
	// Reload cr4 to flush global page mappings in the TLB
	uint64_t t;
	asm volatile("mov %%cr4, %0" : "=r"(t));
	asm volatile("mov %0, %%cr4" :: "r"(t));
}

static char cmdline[256];

/**
 * Parses the multiboot information structure.  We need to extract as much information as we're going to use from
 * here, so that we can trash the memory later.
 */
static bool mb_parse(struct MultibootInfo *multiboot_info)
{
	// Figure out what memory is available.
	struct MultibootMMAPEntry *mmap_entry = (struct MultibootMMAPEntry *)__phys_to_upper_virt(multiboot_info->mmap_addr);
	struct MultibootMMAPEntry *mmap_entry_end = (struct MultibootMMAPEntry *)(__phys_to_upper_virt(multiboot_info->mmap_addr + multiboot_info->mmap_length));
		
	while (mmap_entry < mmap_entry_end) {
		
		switch (mmap_entry->type) {
		case MULTIBOOT_MEMORY_AVAILABLE:
			mm.register_physical_memory(mmap_entry->addr, mmap_entry->len);
			break;
		}
		
		// FIXME: Should this increment by "size"?
		mmap_entry++;
	}
	
	// Figure out what modules are loaded.
	struct MultibootModuleEntry *module_entry = (struct MultibootModuleEntry *)__phys_to_upper_virt(multiboot_info->mods_addr);
	struct MultibootModuleEntry *module_entry_end = (struct MultibootModuleEntry *)(__phys_to_upper_virt(multiboot_info->mods_addr + multiboot_info->mods_count * sizeof(struct MultibootModuleEntry)));
	
	while (module_entry < module_entry_end) {
		module_entry++;
	}
	
	// Store the command-line
	strncpy(cmdline, (const char *)__phys_to_upper_virt(multiboot_info->cmdline), sizeof(cmdline)-1);
	cmdline[255] = 0;
	
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
	
	// Early information message
	dprintf(DebugLevel::INFO, "Starting the Captive Virtual Runtime!");
	
	uint64_t rsp;
	asm volatile("mov %%rsp, %0" : "=r"(rsp));
	dprintf(DebugLevel::DEBUG, "rsp=%p", rsp);

	// (3) Check host architecture capabilities.
	check_arch_caps();
	
	// (4) Update the initial page tables, so we get access to more memory.
	update_init_pgt();
		
	// (4) Parse the multiboot information structure.
	struct MultibootInfo *mbi = (struct MultibootInfo *)(__phys_to_upper_virt(multiboot_info_phys_ptr));
	if (!mb_parse(mbi)) {
		dprintf(DebugLevel::FATAL, "unable to read multiboot information structure");
		host_arch->abort();
	}
	
	// (5) Start the generic runtime.
	vrt::runtime::start(cmdline);
}
