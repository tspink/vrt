#include <arch/host/x86/irq.h>
#include <arch/host/x86/dt.h>
#include <vrt/util/memops.h>

using namespace vrt::arch::host::x86;
using namespace vrt::util;

IRQManager::IRQManager() : _idt(nullptr)
{

}

bool IRQManager::init()
{
	_idt = new IDT();
	
	if (!_idt->init()) {
		return false;
	}
	
	return true;
}

/**
 * Initialises the Interrupt Descriptor Table.
 * @return Returns true if initialisation was successful, false otherwise.
 */
bool IDT::init()
{
	// Clear out the IDT
	bzero(__idt, sizeof(__idt));
	_max_index = 0;
	
	// Reload the IDT register.
	return reload();
}

/**
 * Reloads the IDT register after any changes to the IDT.
 * @return 
 */
bool IDT::reload()
{
	const IDTPointer ptr = { .length = (uint16_t)((_max_index + 1) * 16u), .ptr = __idt };
	asm volatile("lidt %0" :: "m"(ptr));
	
	return true;
}

/**
 * Retrieves the base pointer of the current IDT
 * @return Returns the base address present in the IDTR
 */
uintptr_t IDT::get_ptr()
{
	IDTPointer ptr;
	asm volatile("sidt %0" : "=m"(ptr));
	
	return (uintptr_t)ptr.ptr;
}

/**
 * Registers an interrupt gate in the IDT, at the given index.
 * @param index The index at which to register the interrupt gate.
 * @param addr The address of the interrupt handling routine.
 * @param seg The code-segment selector for the interrupt handling routine.
 * @param dpl The privilege level at which the interrupt gate can be invoked.
 * @return Returns true if the insertion succeeded, false otherwise.
 */
bool IDT::register_interrupt_gate(int index, uintptr_t addr, uint16_t seg, uint8_t dpl)
{
	if (index >= MAX_NR_IDT_ENTRIES) return false;
	
	InterruptGateDescriptor desc(addr, seg, dpl);
	
	__idt[index].low = desc.bits_low;
	__idt[index].high = desc.bits_high;
	
	if (index > _max_index) {
		_max_index = index;
	}
	
	return true;
}

/**
 * Registers a trap gate in the IDT, at the given index.
 * @param index The index at which to register the trap gate.
 * @param addr The address of the trap handling routine.
 * @param seg The code-segment selector for the trap handling routine.
 * @param dpl The privilege level at which the trap gate can be invoked.
 * @return Returns true if the insertion succeeded, false otherwise.
 */
bool IDT::register_trap_gate(int index, uintptr_t addr, uint16_t seg, uint8_t dpl)
{
	if (index >= MAX_NR_IDT_ENTRIES) return false;
	
	TrapGateDescriptor desc(addr, seg, dpl);
	
	__idt[index].low = desc.bits_low;
	__idt[index].high = desc.bits_high;
	
	if (index > _max_index) {
		_max_index = index;
	}
	
	return true;
}
