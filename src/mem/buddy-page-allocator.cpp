#include <vrt/mem/buddy-page-allocator.h>
#include <vrt/util/debug.h>
#include <vrt/util/printf.h>

using namespace vrt::mem;
using namespace vrt::util;

bool BuddyPageAllocator::init()
{
	uint64_t block_size = pages_per_block(MAX_ORDER);
	uint64_t nr_blocks = mm.nr_page_descriptors() / block_size;

	_free_pages = 0;
	_total_pages = 0;
	
	PageDescriptor **slot = &_free_areas[MAX_ORDER];
	for (uint64_t block_index = 0; block_index < nr_blocks; block_index++) {
		uint64_t block_offset = block_index * block_size;

		// Stop considering blocks after the VM break.
		if (block_offset >= 0x100000) {
			break;
		}
		
		_free_pages += block_size;
		_total_pages += block_size;

		PageDescriptor *descriptor = &mm.page_descriptors()[block_offset];

		*slot = descriptor;
		slot = &(descriptor->NextFree);
	}

	return true;
}

PageDescriptor* BuddyPageAllocator::alloc_pages(order_t order)
{
	// Make sure that the requested order is OK.
	if (order < 0 || order > MAX_ORDER) {
		return NULL;
	}

	// Try to find the first free block that will satisfy the requested order.
	order_t next_avail_order;
	for (next_avail_order = order; next_avail_order <= MAX_ORDER; next_avail_order++) {
		if (_free_areas[next_avail_order] != NULL) {
			break;
		}
	}

	// If the loop finished, then we're out of memory, and out of luck.
	if (next_avail_order > MAX_ORDER) {
		return NULL;
	}

	// Now, working towards the requested order, split the orders to release
	// finer granularity pages.
	for (order_t i = next_avail_order; i > order; i--) {
		split_block(&_free_areas[i], i);
	}

	// The head of the free area for the requested order should now contain
	// enough pages to satisfy the 'order' requested.		
	PageDescriptor *target = _free_areas[order];
	_free_areas[order] = target->NextFree;
	target->NextFree = NULL;
	
	_free_pages -= (1 << order);

	return target;
}

void BuddyPageAllocator::free_pages(PageDescriptor* pgd, order_t order)
{
	// Ensure pgd is correctly aligned for the order
	assert(is_correct_alignment_for_order(pgd, order));

	// Insert the block back into the order.
	PageDescriptor **slot = insert_block(pgd, order);

	// Iteratively merge blocks, whilst the buddies are also free.
	while (order < (MAX_ORDER - 1) && (((*slot)->NextFree == buddy_of(*slot, order)) || buddy_of(*slot, order)->NextFree == *slot)) {
		slot = merge_block(slot, order++);
	}
	
	_free_pages += (1 << order);
}

void BuddyPageAllocator::reserve_page(PageDescriptor* pgd)
{
retry:
	for (int current_order = 0; current_order <= MAX_ORDER; current_order++) {
		uint64_t ppb = pages_per_block(current_order);

		PageDescriptor **current_area = &_free_areas[current_order];
		while (*current_area) {

			// Does this area contain the page?
			if (pgd >= *current_area && pgd < (*current_area + ppb)) {
				if (current_order == 0) {
					// Finally we've got the single page, so unlink it.
					*current_area = (*current_area)->NextFree;
					pgd->NextFree = NULL;
					
					_free_pages--;
					return;
				}

				split_block(current_area, current_order);
				goto retry;
			}

			current_area = &(*current_area)->NextFree;
		}
	}
}

void BuddyPageAllocator::dump()
{
	for (unsigned int i = 0; i <= MAX_ORDER; i++) {
		char buffer[512];
		buffer[0] = 0;

		snprintf(buffer, 512, "[%u] ", i);

		PageDescriptor *current = _free_areas[i];
		while (current) {
			snprintf(buffer, 512, "%s %lx--%lx",
					buffer,
					mm.page_descriptor_to_pfn(current),
					mm.page_descriptor_to_pfn(current) + pages_per_block(i) - 1);
			current = current->NextFree;
		}

		dprintf(DebugLevel::DEBUG, "%s", buffer);
	}
}

void BuddyPageAllocator::print_statistics()
{
	dprintf(DebugLevel::DEBUG, "buddy page allocator: total-pages: %lu, free-pages: %lu (%u MB)",
			_total_pages,
			_free_pages,
			MB(_free_pages * 0x1000));
}

PageDescriptor *BuddyPageAllocator::buddy_of(PageDescriptor *pgd, order_t order)
{
	if (order >= MAX_ORDER) {
		return NULL;
	}

	if (!is_correct_alignment_for_order(pgd, order)) {
		return NULL;
	}

	uint64_t buddy_pfn = is_correct_alignment_for_order(pgd, order + 1) ?
			mm.page_descriptor_to_pfn(pgd) + pages_per_block(order) :
			mm.page_descriptor_to_pfn(pgd) - pages_per_block(order);

	return mm.pfn_to_page_descriptor(buddy_pfn);
}

PageDescriptor **BuddyPageAllocator::insert_block(PageDescriptor *pgd, order_t order)
{
	// Starting from the _free_area array, find the slot in which the page descriptor
	// should be inserted.
	PageDescriptor **slot = &_free_areas[order];

	// Iterate whilst there is a slot, and whilst the page descriptor pointer is numerically
	// greater than what the slot is pointing to.
	while (*slot && pgd > *slot) {
		slot = &(*slot)->NextFree;
	}

	// Insert the page descriptor into the linked list.
	pgd->NextFree = *slot;
	*slot = pgd;

	// Return the insert point (i.e. slot)
	return slot;
}

void BuddyPageAllocator::remove_block(PageDescriptor *pgd, order_t order)
{
	// Starting from the _free_area array, iterate until the block has been located in the linked-list.
	PageDescriptor **slot = &_free_areas[order];
	while (*slot && pgd != *slot) {
		slot = &(*slot)->NextFree;
	}

	// Make sure the block actually exists.  Panic the system if it does not.
	assert(*slot == pgd);

	// Remove the block from the free list.
	*slot = pgd->NextFree;
	pgd->NextFree = NULL;
}

PageDescriptor *BuddyPageAllocator::split_block(PageDescriptor **block_pointer, order_t source_order)
{
	// Make sure there is an incoming pointer.
	assert(*block_pointer);

	// Make sure the block_pointer is correctly aligned.
	assert(is_correct_alignment_for_order(*block_pointer, source_order));

	// An order-0 (or invalid order) block cannot be split.
	if (source_order <= 0)
		return *block_pointer;

	// The target order is simply the order one less than the incoming block.
	int target_order = source_order - 1;

	// Determine the number of pages in a block, in the target order.
	uint64_t ppb = pages_per_block(target_order);

	// Split the current block into a left-hand-side and a right-hand-side.
	PageDescriptor *left = *block_pointer;
	PageDescriptor *right = left + ppb;

	// Remove the block from the source order.
	remove_block(left, source_order);

	// Insert the left and right blocks into the target order.
	insert_block(left, target_order);
	insert_block(right, target_order);

	return left;
}

PageDescriptor **BuddyPageAllocator::merge_block(PageDescriptor **block_pointer, order_t source_order)
{
	assert(*block_pointer);

	// Make sure the area_pointer is correctly aligned.
	assert(is_correct_alignment_for_order(*block_pointer, source_order));

	// Areas in the top order cannot be merged.
	if (source_order >= (MAX_ORDER - 1)) {
		return NULL;
	}

	// The target order is one plus the source order.
	int target_order = source_order + 1;

	PageDescriptor *left = *block_pointer;
	PageDescriptor *right = buddy_of(left, source_order);

	// Remove the left and right hand blocks.
	remove_block(left, source_order);
	remove_block(right, source_order);

	// Insert the left hand block into the target order.  We MUST check to see if this function was called
	// with the LEFT or the RIGHT block in the buddy pair.
	if (left < right)
		return insert_block(left, target_order);
	else
		return insert_block(right, target_order);
}
