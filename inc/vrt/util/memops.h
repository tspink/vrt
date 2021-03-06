#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace util
	{
		extern void bzero(void *ptr, size_t length);
		extern void pzero(void *ptr, size_t nr);
		
		extern char *strncpy(char *dest, const char *src, size_t n);
		extern unsigned int strlen(const char *str);
		
		extern void *memcpy(void *dest, const void *src, size_t n);
		extern void *memset(void *dest, int c, size_t n);
	}
}
