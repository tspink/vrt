#pragma once

#include <vrt/define.h>

namespace vrt
{
	namespace util
	{
		namespace DebugLevel
		{
			enum DebugLevel
			{
				DEBUG,
				INFO,
				WARNING,
				ERROR,
				FATAL
			};
		}
		
		extern void dprintf(DebugLevel::DebugLevel level, const char *msg, ...);
		
		static inline void halt() {
			for (;;) {
				asm volatile("hlt");
				asm volatile("pause");
			}
		}
	}
}