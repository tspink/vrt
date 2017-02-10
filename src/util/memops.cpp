#include <vrt/util/memops.h>

using namespace vrt::util;

__weak void vrt::util::bzero(void* ptr, size_t length)
{
	for (unsigned long i = 0; i < length; i++) {
		((uint8_t *)ptr)[i] = 0;
	}
}

__weak void vrt::util::pzero(void* ptr, size_t count)
{
	vrt::util::bzero(ptr, 0x1000 * count);
}

__weak char *vrt::util::strncpy(char *dest, const char *src, size_t n)
{
	for (unsigned long i = 0; i < n; i++) {
		dest[i] = src[i];
		if (src[i] == 0) {
			break;
		}
	}
	
	return dest;	
}

__weak void *vrt::util::memset(void* dest, int c, size_t n)
{
	for (unsigned long i = 0; i < n; i++) {
		((uint8_t *)dest)[i] = (uint8_t)c;
	}
	
	return dest;
}

__weak void *vrt::util::memcpy(void* dest, const void* src, size_t n)
{
	for (unsigned long i = 0; i < n; i++) {
		((uint8_t *)dest)[i] = ((uint8_t *)src)[i];
	}
	
	return dest;
}
