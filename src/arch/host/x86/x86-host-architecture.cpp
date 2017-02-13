#include <arch/host/x86/x86-host-architecture.h>
#include <arch/host/x86/irq.h>
#include <vrt/mem/mem.h>

using namespace vrt::arch::host;
using namespace vrt::arch::host::x86;
using namespace vrt::mem;

X86HostArchitecture vrt::arch::host::x86::x86_host_arch;
HostArchitecture *vrt::arch::host::host_arch = &x86_host_arch;

X86HostArchitecture::X86HostArchitecture() : _pml4_low64(0), _pml4_high64(0), _irq_manager(nullptr)
{

}

bool X86HostArchitecture::init_platform()
{
	_irq_manager = new IRQManager();
	
	if (!_irq_manager->init()) {
		return false;
	}
	
	return true;
}

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

void X86HostArchitecture::switch_address_space(HostAddressSpace::HostAddressSpace addrspace)
{
	switch(addrspace) {
	case HostAddressSpace::LOW64:
		write_cr3(_pml4_low64);
		break;
	case HostAddressSpace::HIGH64:
		write_cr3(_pml4_high64);
		break;
	}
}
