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

	vrt::arch::host::host_arch->debug_write(buffer);
}
