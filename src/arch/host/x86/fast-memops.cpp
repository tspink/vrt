#include <vrt/util/memops.h>

extern "C" void __bzero(void *, size_t);
extern "C" void __pzero(void *, size_t);

using namespace vrt::util;

__strong void vrt::util::bzero(void* ptr, size_t length)
{
	__bzero(ptr, length);
}

__strong void vrt::util::pzero(void* ptr, size_t count)
{
	__pzero(ptr, count);
}
