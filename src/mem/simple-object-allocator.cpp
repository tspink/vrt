#include <vrt/mem/simple-object-allocator.h>
#include <vrt/util/debug.h>

using namespace vrt::mem;
using namespace vrt::util;

bool SimpleObjectAllocator::init()
{
	return true;
}

void* SimpleObjectAllocator::alloc(size_t size)
{
	return nullptr;
}

void SimpleObjectAllocator::free(void* p)
{

}
