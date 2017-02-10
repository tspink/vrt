#include <vrt/util/memops.h>

extern "C" void __bzero(void *, size_t);
extern "C" void __pzero(void *, size_t);
extern "C" void __memcpy(void *, const void *, size_t);
extern "C" void __memset(void *, int, size_t);

using namespace vrt::util;

__strong void vrt::util::bzero(void* ptr, size_t length)
{
	__bzero(ptr, length);
}

__strong void vrt::util::pzero(void* ptr, size_t count)
{
	__pzero(ptr, count);
}

__strong void *vrt::util::memcpy(void *dest, const void *src, size_t length)
{
	__memcpy(dest, src, length);
	return dest;
}

__strong void *vrt::util::memset(void *dest, int c, size_t length)
{
	__memset(dest, c, length);
	return dest;
}
