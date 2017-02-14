#pragma once

#include <vrt/define.h>
#include <arch/host/host-architecture.h>

namespace vrt {
	namespace util {
		namespace DebugLevel {

			enum DebugLevel {
				DEBUG,
				INFO,
				WARNING,
				ERROR,
				FATAL
			};
		}

		extern void dprintf(DebugLevel::DebugLevel level, const char *msg, ...);
		extern void assertion_failure(const char *filename, int lineno, const char *expression) __noreturn;

#define fatal(a...) do { vrt::util::dprintf(vrt::util::DebugLevel::FATAL, a); vrt::arch::host::host_arch->abort(); } while(0)
#define assert(_expr) do { if (!(_expr)) { vrt::util::assertion_failure(__FILE__, __LINE__, #_expr); __unreachable(); } } while(0)
#define not_implemented() assert(false && "NOT IMPLEMENTED")
	}
}