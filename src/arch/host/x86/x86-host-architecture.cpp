#include <arch/host/x86/x86-host-architecture.h>
#include <vrt/mem/mem.h>

using namespace vrt::arch::host;
using namespace vrt::arch::host::x86;
using namespace vrt::mem;

X86HostArchitecture x86_host_arch;
HostArchitecture *vrt::arch::host::host_arch = &x86_host_arch;

__noreturn void X86HostArchitecture::abort()
{
	for (;;) asm volatile("pause; hlt");
}

void X86HostArchitecture::debug_write(const char* message)
{
	while (*message) {
		asm volatile("outb %%al, %%dx" :: "a"(*message++), "d"(0x3f8));
	}
}
