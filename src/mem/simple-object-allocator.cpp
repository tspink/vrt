#include <vrt/mem/simple-object-allocator.h>
#include <vrt/util/debug.h>

using namespace vrt::mem;
using namespace vrt::util;

extern "C" void *dlmalloc(size_t size);
extern "C" void *dlrealloc(void *p, size_t size);
extern "C" void dlfree(void *ptr);

bool SimpleObjectAllocator::init()
{
	return true;
}

void* SimpleObjectAllocator::alloc(size_t size)
{
	return dlmalloc(size);
}

void* SimpleObjectAllocator::realloc(void *p, size_t size)
{
	return dlrealloc(p, size);
}

void SimpleObjectAllocator::free(void* p)
{
	dlfree(p);
}
