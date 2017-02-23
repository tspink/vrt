#include <arch/host/x86/irq.h>
#include <arch/host/x86/dt.h>
#include <vrt/util/memops.h>
#include <vrt/util/debug.h>

using namespace vrt::arch::host::x86;
using namespace vrt::util;

IRQManager::IRQManager()
{

}

bool IRQManager::init()
{
	return true;
}

extern "C" void x86_handle_raw_irq(uint8_t irq_nr)
{
	dprintf(DebugLevel::DEBUG, "IRQ: %u", irq_nr);
	fatal("X");
}
