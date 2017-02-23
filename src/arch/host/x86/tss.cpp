#include <arch/host/x86/dt.h>

using namespace vrt::arch::host::x86;

/**
 * Initialises the TSS by loading the task register (TR) with the selector of
 * the TSS descriptor in the GDT.
 * @param sel The selector of the TSS descriptor in the GDT.
 * @return Returns true if initialisation was successful, or false otherwise.
 */
bool TSS::init(uint16_t sel)
{
	set_kernel_stack(0);
	
	asm volatile("ltr %0" :: "r"(sel));
	return true;
}

void TSS::set_kernel_stack(uintptr_t stack)
{
	uint64_t *fields = (uint64_t *)((uintptr_t)__tss + 4);
	fields[0] = (uint64_t)stack;
}

/**
 * Interrogates the task register (TR) to determine the selector that references
 * the TSS descriptor in the GDT.
 * @return The selector that references the TSS descriptor in the GDT.
 */
uint16_t TSS::get_sel()
{
	uint16_t sel;
	asm volatile("str %0" : "=r"(sel));
	
	return sel;
}
