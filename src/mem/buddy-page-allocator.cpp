#include <vrt/mem/buddy-page-allocator.h>

using namespace vrt::mem;

bool BuddyPageAllocator::init()
{
	return true;
}

void* BuddyPageAllocator::alloc_pages(int order)
{
	return NULL;
}

void BuddyPageAllocator::free_pages(void* p, int order)
{

}
