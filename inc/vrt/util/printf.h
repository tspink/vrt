#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace util
	{
		extern int snprintf(char *buffer, int size, const char *fmt, ...);
		extern int sprintf(char *buffer, const char *fmt, ...);
		extern int vsnprintf(char *buffer, int size, const char *fmt, va_list args);
	}
}
