#include <vrt/mem/mem.h>
#include <vrt/util/debug.h>

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

extern "C" {
	void __cxa_pure_virtual()
	{
		fatal("pure virtual function called");
	}
}
