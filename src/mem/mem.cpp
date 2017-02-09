#include <vrt/mem/mem.h>
#include <vrt/mem/buddy-page-allocator.h>
#include <vrt/mem/simple-object-allocator.h>
#include <vrt/util/debug.h>

using namespace vrt::mem;
using namespace vrt::util;

static BuddyPageAllocator buddy_pgalloc;
static SimpleObjectAllocator simple_objalloc;

Memory vrt::mem::mm;

extern char _PAGE_DESCRIPTORS_START;

Memory::Memory() : _page_allocator(nullptr), _obj_allocator(nullptr), _page_descriptors(nullptr)
{
	_page_allocator = &buddy_pgalloc;
	_obj_allocator = &simple_objalloc;
	_page_descriptors = (PageDescriptor *) & _PAGE_DESCRIPTORS_START;

	for (unsigned int i = 0; i < ARRAY_SIZE(_physical_memory_blocks); i++) {
		_physical_memory_blocks[i].IsValid = false;
	}
}

bool Memory::init()
{
	if (!_page_allocator || !_obj_allocator) {
		dprintf(DebugLevel::FATAL, "Allocators not registered\n");
		return false;
	}

	if (!initialise_page_descriptors()) {
		dprintf(DebugLevel::FATAL, "Unable to initialise page descriptors\n");
		return false;
	}

	if (!_page_allocator->init()) {
		dprintf(DebugLevel::FATAL, "Page allocator failed to initialise\n");
		return false;
	}

	if (!perform_reservations()) {
		dprintf(DebugLevel::FATAL, "Unable to reserve memory\n");
		return false;
	}

	if (!_obj_allocator->init()) {
		dprintf(DebugLevel::FATAL, "Object allocator failed to initialise\n");
		return false;
	}

	return true;
}

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

bool Memory::perform_reservations()
{
	//reserve_physical_memory(0, 0x1000);		// Reserve page zero.

	return true;
}

bool Memory::initialise_page_descriptors()
{
	uint64_t last_address = 0;
	for (unsigned int block_index = 0; block_index < ARRAY_SIZE(_physical_memory_blocks); block_index++) {
		if (_physical_memory_blocks[block_index].End > last_address) {
			last_address = _physical_memory_blocks[block_index].End;
		}
	}

	uint64_t nr_pages = __page_index(last_address) + 1;

	dprintf(DebugLevel::DEBUG, "page count: %lu, descriptor array @ %p--%p\n",
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
		uint64_t start_page = __page_index(_physical_memory_blocks[block_index].Start);
		uint64_t end_page = __page_index(_physical_memory_blocks[block_index].End) + 1;

		for (unsigned int page_index = start_page; page_index < end_page; page_index++) {
			_page_descriptors[page_index].Type = PageDescriptorType::AVAILABLE;
		}
	}
	
	return true;
}
