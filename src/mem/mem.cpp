#include <vrt/mem/mem.h>
#include <vrt/mem/buddy-page-allocator.h>
#include <vrt/mem/simple-object-allocator.h>
#include <vrt/util/debug.h>
#include <arch/host/host-architecture.h>

using namespace vrt::mem;
using namespace vrt::util;
using namespace vrt::arch::host;

static BuddyPageAllocator buddy_pgalloc;
static SimpleObjectAllocator simple_objalloc;

Memory vrt::mem::mm;

extern char _PAGE_DESCRIPTORS_START;

Memory::Memory() : _page_allocator(nullptr), _obj_allocator(nullptr), _page_descriptors(nullptr)
{
	// Store pointers to the statically allocator memory allocators, and locate the address
	// of the page descriptor array.
	_page_allocator = &buddy_pgalloc;
	_obj_allocator = &simple_objalloc;
	_page_descriptors = (PageDescriptor *) & _PAGE_DESCRIPTORS_START;

	// Clear the physical_memory_blocks array.
	for (unsigned int i = 0; i < ARRAY_SIZE(_physical_memory_blocks); i++) {
		_physical_memory_blocks[i].IsValid = false;
	}
}

/**
 * Initialises the memory management subsystem.
 */
bool Memory::init()
{
	// Make sure instances of the page allocator and object allocator were registered.
	if (!_page_allocator || !_obj_allocator) {
		dprintf(DebugLevel::FATAL, "mem: memory allocators not registered");
		return false;
	}

	// Initialise the page descriptor array.
	if (!initialise_page_descriptors()) {
		dprintf(DebugLevel::FATAL, "mem: unable to initialise page descriptors");
		return false;
	}

	// Initialise the page allocator.
	if (!_page_allocator->init()) {
		dprintf(DebugLevel::FATAL, "mem: page allocator failed to initialise");
		return false;
	}

	// Tell the page allocator about reserved pages.
	if (!perform_reservations()) {
		dprintf(DebugLevel::FATAL, "mem: unable to reserve memory");
		return false;
	}

	// Initialise the object allocator.
	if (!_obj_allocator->init()) {
		dprintf(DebugLevel::FATAL, "mem: object allocator failed to initialise");
		return false;
	}

	return true;
}

/**
 * Registers a block of available physical memory.
 */
void Memory::register_physical_memory(phys_addr_t start, size_t size)
{
	for (unsigned int i = 0; i < ARRAY_SIZE(_physical_memory_blocks); i++) {
		if (!_physical_memory_blocks[i].IsValid) {
			_physical_memory_blocks[i].Start = start;
			_physical_memory_blocks[i].End = start + size - 1;
			_physical_memory_blocks[i].IsValid = true;
			
			return;
		}
	}
}

/**
 * Instructs the page allocator to disregard certain regions of memory.
 */
bool Memory::perform_reservations()
{
	//reserve_physical_memory(0, 0x1000);		// Reserve page zero.

	return true;
}

/**
 * Initialises the page descriptor array.
 */
bool Memory::initialise_page_descriptors()
{
	uint64_t last_address = 0;
	for (unsigned int block_index = 0; block_index < ARRAY_SIZE(_physical_memory_blocks); block_index++) {
		if (_physical_memory_blocks[block_index].End > last_address) {
			last_address = _physical_memory_blocks[block_index].End;
		}
	}

	uint64_t nr_pages = __page_index(last_address) + 1;

	dprintf(DebugLevel::DEBUG, "mem: page count=%lu, page descriptor array @ %p--%p",
			nr_pages,
			_page_descriptors,
			_page_descriptors + nr_pages);

	// First, make sure that the array is cleared out.
	for (unsigned long page_index = 0; page_index < nr_pages; page_index++) {
		_page_descriptors[page_index].Type = PageDescriptorType::INVALID;
		_page_descriptors[page_index].NextFree = NULL;
	}

	// Now, loop over each physical memory block, and mark the page descriptors as available.
	for (unsigned int block_index = 0; block_index < ARRAY_SIZE(_physical_memory_blocks); block_index++) {
		if (!_physical_memory_blocks[block_index].IsValid) continue;
		
		uint64_t start_page = __page_index(_physical_memory_blocks[block_index].Start);
		uint64_t end_page = __page_index(_physical_memory_blocks[block_index].End) + 1;

		dprintf(DebugLevel::INFO, "mem: block %016lx--%016lx (%lu kB)", 
				_physical_memory_blocks[block_index].Start, 
				_physical_memory_blocks[block_index].End,
				KB((_physical_memory_blocks[block_index].End + 1) - _physical_memory_blocks[block_index].Start));
		
		for (unsigned int page_index = start_page; page_index < end_page; page_index++) {
			_page_descriptors[page_index].Type = PageDescriptorType::AVAILABLE;
		}
	}
	
	return true;
}
