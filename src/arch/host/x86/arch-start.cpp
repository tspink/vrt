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
#include <vrt/runtime/modules.h>
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
using namespace vrt::runtime;
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

	if (!(features.rdx & CPUIDFeatures::PGE)) {
		dprintf(DebugLevel::WARNING, "CPU does not support PGE");
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
	
	// Obtain an "upper" virtual address pointer to the page table.
	void *next = (void *)__phys_to_upper_virt(_init_pgt_start);
	
	// Register this page as boot memory.
	mm.register_boot_mem(_init_pgt_start, __host_paging::page_size);
	
	// Increase the next-free-page pointer.
	_init_pgt_start += __host_paging::page_size;
	
	vrt::util::pzero(next, 1);
	return next;
}

#define PT_FLAG_PRESENT			0x001
#define PT_FLAG_WRITABLE		0x002
#define PT_FLAG_USER_ALLOWED	0x004
#define PT_FLAG_PAGE_SIZE		0x080
#define PT_FLAG_GLOBAL			0x100

/**
 * Updates the initial page tables, by removing the lower memory mapping and
 * inserting more entries into the upper address space.
 */
static void update_init_pgt()
{
	typedef uint64_t pte_t;
	typedef pte_t *ptep_t;
	
	const uint16_t default_flags = 
		PT_FLAG_PRESENT | 
		PT_FLAG_WRITABLE | 
		PT_FLAG_USER_ALLOWED | 
		PT_FLAG_GLOBAL;
	
	ptep_t pml4_A = (ptep_t)alloc_init_pgt();	// This is the guest LOW64 page table
	ptep_t pml4_B = (ptep_t)alloc_init_pgt();	// This is the guest HIGH64 page table
	
	// Tell the host architecture manager about the two address spaces.
	x86_host_arch.set_address_spaces(__upper_virt_to_phys(pml4_A), __upper_virt_to_phys(pml4_B));
	
	ptep_t pdp0 = (ptep_t)alloc_init_pgt();
	ptep_t pd0 = (ptep_t)alloc_init_pgt();
	ptep_t pd1 = (ptep_t)alloc_init_pgt();
	
	// Initialise PML4-A and PML4-B with the same upper pointers.
	pml4_A[0x1ff] = __upper_virt_to_phys(pdp0) | default_flags;
	pml4_B[0x1ff] = __upper_virt_to_phys(pdp0) | default_flags;
	
	pdp0[0x1fe] = __upper_virt_to_phys(pd0) | default_flags;
	pdp0[0x1ff] = __upper_virt_to_phys(pd1) | default_flags;
	
	// Map the entire -2GB VMEM space 1:1 to Physical Memory
	for (unsigned int i = 0; i < 0x200; i++) {
		hpa_t base = 0x200000 * i;
		pd0[i] = (pte_t)(base | default_flags | PT_FLAG_PAGE_SIZE);
	}
	
	for (unsigned int i = 0; i < 0x200; i++) {
		hpa_t base = 0x200000 * (i + 0x200);
		pd1[i] = (pte_t)(base | default_flags | PT_FLAG_PAGE_SIZE);
	}
	
	// Map lots of physical memory from the 48-bit split.
	ptep_t pdp1 = (ptep_t)alloc_init_pgt();
	pml4_A[0x100] = __upper_virt_to_phys(pdp1) | default_flags;
	pml4_B[0x100] = __upper_virt_to_phys(pdp1) | default_flags;

	hpa_t starting_base = 0;
	
	// Map 8 GB of physical memory, using 8 * 512 * 2MB pages.
	for (unsigned int pdp_index = 0; pdp_index < 8; pdp_index++) {
		// Allocate a page descriptor table.
		ptep_t pd = (ptep_t)alloc_init_pgt();
		
		// Insert the PD into the PDP, with PRESENT + WRITE permissions.
		pdp1[pdp_index] = __upper_virt_to_phys(pd) | default_flags;		
		
		// Install a 1 GB mapping, using 512 * 2MB pages.
		for (unsigned int pd_index = 0; pd_index < 0x200; pd_index++) {
			//hpa_t base = 0x200000 * (pd_index + (pdp_index * 0x200));
			pd[pd_index] = (pte_t)(starting_base | default_flags | PT_FLAG_PAGE_SIZE);
			starting_base += 0x200000;
		}
	}
		
	// Flush the page table
	asm volatile("mov %0, %%cr3" :: "r"(__upper_virt_to_phys(pml4_A)) : "memory");
	
	// Reload cr4 to flush global page mappings in the TLB
	uint64_t t;
	asm volatile("mov %%cr4, %0" : "=r"(t) :: "memory");
	asm volatile("mov %0, %%cr4" :: "r"(t) : "memory");
}

static char cmdline[256];

extern char _PAGE_DESCRIPTORS_START;
hva_t __first_avail_page;

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
			
	// Figure out what modules are loaded, and remember the last address of the loaded module.
	struct MultibootModuleEntry *module_entry = (struct MultibootModuleEntry *)__phys_to_upper_virt(multiboot_info->mods_addr);
	struct MultibootModuleEntry *module_entry_end = (struct MultibootModuleEntry *)(__phys_to_upper_virt(multiboot_info->mods_addr + multiboot_info->mods_count * sizeof(struct MultibootModuleEntry)));
	
	hva_t last_module_address = (hva_t)&_PAGE_DESCRIPTORS_START;
	while (module_entry < module_entry_end) {
		dprintf(DebugLevel::DEBUG, 
				"Module descr=%p cmdline=%p start=%p, end=%p", 
				module_entry,
				module_entry->cmdline,
				module_entry->mod_start,
				module_entry->mod_end);
		
		hva_t module_start_address = __phys_to_upper_virt(module_entry->mod_start);
		hva_t module_end_address = __phys_to_upper_virt(module_entry->mod_end);
		assert(module_end_address > module_start_address);
		
		size_t module_size = module_end_address - module_start_address;
		if (module_end_address > last_module_address) {
			last_module_address = module_end_address;
		}
				
		// Register the module.
		module_manager.register_module(
			module_start_address, 
			module_size, 
			(const char *)__phys_to_upper_virt(module_entry->cmdline));
		
		module_entry++;
	}
	
	__first_avail_page = last_module_address;
	
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
extern "C" __noreturn __noinline void x86_arch_start(hpa_t multiboot_info_phys_ptr)
{
	// (1) Zero the BSS section, so that uninitialised globals are correctly
	// initialised to zero.
	zero_bss();
	
	// (2) Run the static constructors.
	run_static_ctors();
	
	// Early information message
	dprintf(DebugLevel::INFO, "-------------------------------------");
	dprintf(DebugLevel::INFO, "Starting the Captive Virtual Runtime!");
	
	uint64_t rsp;
	asm volatile("mov %%rsp, %0" : "=r"(rsp));
	dprintf(DebugLevel::DEBUG, "rsp=%p", rsp);

	// (3) Check host architecture capabilities.
	check_arch_caps();
	
	// (4) Update the initial page tables, so we get access to more memory.
	update_init_pgt();
		
	// (5) Parse the multiboot information structure.
	struct MultibootInfo *mbi = (struct MultibootInfo *)(__phys_to_upper_virt(multiboot_info_phys_ptr));
	if (!mb_parse(mbi)) {
		dprintf(DebugLevel::FATAL, "unable to read multiboot information structure");
		host_arch->abort();
	}
	
	// (6) Start the generic runtime.
	vrt::runtime::start(cmdline);
}
