#include <vrt/util/debug.h>
#include <vrt/util/printf.h>
#include <arch/host/host-architecture.h>

using namespace vrt::util;

void vrt::util::dprintf(DebugLevel::DebugLevel level, const char* msg, ...)
{
	char buffer[512];

	va_list args;

	va_start(args, msg);
	vsnprintf(buffer, sizeof(buffer), msg, args);
	va_end(args);

	switch (level) {
	case DebugLevel::DEBUG: vrt::arch::host::host_arch->debug_write("debug"); break;
	case DebugLevel::INFO: vrt::arch::host::host_arch->debug_write(" info"); break;
	case DebugLevel::WARNING: vrt::arch::host::host_arch->debug_write(" warn"); break;
	case DebugLevel::ERROR: vrt::arch::host::host_arch->debug_write("error"); break;
	case DebugLevel::FATAL: vrt::arch::host::host_arch->debug_write("fatal"); break;
	}
	
	vrt::arch::host::host_arch->debug_write(": ");
	vrt::arch::host::host_arch->debug_write(buffer);
	vrt::arch::host::host_arch->debug_write("\n");
}
