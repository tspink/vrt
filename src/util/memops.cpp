#include <vrt/util/memops.h>

using namespace vrt::util;

__weak void vrt::util::bzero(void* ptr, size_t length)
{
	for (unsigned long i = 0; i < length; i++) {
		((uint8_t *)ptr)[i] = 0;
	}
}

__weak char *vrt::util::strncpy(char *dest, const char *src, size_t n)
{
	for (unsigned int i = 0; i < n; i++) {
		dest[i] = src[i];
		if (src[i] == 0) {
			break;
		}
	}
	
	return dest;	
}
