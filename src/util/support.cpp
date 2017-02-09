#include <vrt/mem/mem.h>

using namespace vrt::mem;

void *operator new(size_t size)
{
	return mm.objalloc().alloc(size);
}

void *operator new[](size_t size)
{
	return mm.objalloc().alloc(size);
}

void operator delete(void *p)
{
	return mm.objalloc().free(p);
}

void operator delete(void *p, size_t sz)
{
	return mm.objalloc().free(p);
}
