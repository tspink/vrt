#include <arch/host/x86/dt.h>
#include <arch/host/x86/irq-entry-points.h>
#include <vrt/util/memops.h>

using namespace vrt::arch::host::x86;
using namespace vrt::util;

// An array containing pointers to the IRQ entry-point functions
static irq_entry_point_t irq_entry_points[] = {
	__irq0,		__irq1,		__irq2,		__irq3,		__irq4,
	__irq5,		__irq6,		__irq7,		__irq8,		__irq9,
	__irq10, 	__irq11, 	__irq12, 	__irq13, 	__irq14, 
	__irq15, 	__irq16, 	__irq17, 	__irq18, 	__irq19, 
	__irq20, 	__irq21, 	__irq22, 	__irq23, 	__irq24, 
	__irq25, 	__irq26, 	__irq27, 	__irq28, 	__irq29, 
	__irq30, 	__irq31, 	__irq32, 	__irq33, 	__irq34, 
	__irq35, 	__irq36, 	__irq37, 	__irq38, 	__irq39, 
	__irq40, 	__irq41, 	__irq42, 	__irq43, 	__irq44, 
	__irq45, 	__irq46, 	__irq47, 	__irq48, 	__irq49, 
	__irq50, 	__irq51, 	__irq52, 	__irq53, 	__irq54, 
	__irq55, 	__irq56, 	__irq57, 	__irq58, 	__irq59, 
	__irq60, 	__irq61, 	__irq62, 	__irq63, 	__irq64, 
	__irq65, 	__irq66, 	__irq67, 	__irq68, 	__irq69, 
	__irq70, 	__irq71, 	__irq72, 	__irq73, 	__irq74, 
	__irq75, 	__irq76, 	__irq77, 	__irq78, 	__irq79, 
	__irq80, 	__irq81, 	__irq82, 	__irq83, 	__irq84, 
	__irq85, 	__irq86, 	__irq87, 	__irq88, 	__irq89, 
	__irq90, 	__irq91, 	__irq92, 	__irq93, 	__irq94, 
	__irq95, 	__irq96, 	__irq97, 	__irq98, 	__irq99, 
	__irq100, 	__irq101, 	__irq102, 	__irq103, 	__irq104, 
	__irq105, 	__irq106, 	__irq107, 	__irq108, 	__irq109, 
	__irq110, 	__irq111, 	__irq112, 	__irq113, 	__irq114, 
	__irq115, 	__irq116, 	__irq117, 	__irq118, 	__irq119, 
	__irq120, 	__irq121, 	__irq122, 	__irq123, 	__irq124, 
	__irq125, 	__irq126, 	__irq127, 	__irq128, 	__irq129, 
	__irq130, 	__irq131, 	__irq132, 	__irq133, 	__irq134, 
	__irq135, 	__irq136, 	__irq137, 	__irq138, 	__irq139, 
	__irq140, 	__irq141, 	__irq142, 	__irq143, 	__irq144, 
	__irq145, 	__irq146, 	__irq147, 	__irq148, 	__irq149, 
	__irq150, 	__irq151, 	__irq152, 	__irq153, 	__irq154, 
	__irq155, 	__irq156, 	__irq157, 	__irq158, 	__irq159, 
	__irq160, 	__irq161, 	__irq162, 	__irq163, 	__irq164, 
	__irq165, 	__irq166, 	__irq167, 	__irq168, 	__irq169, 
	__irq170, 	__irq171, 	__irq172, 	__irq173, 	__irq174, 
	__irq175, 	__irq176, 	__irq177, 	__irq178, 	__irq179, 
	__irq180, 	__irq181, 	__irq182, 	__irq183, 	__irq184, 
	__irq185, 	__irq186, 	__irq187, 	__irq188, 	__irq189, 
	__irq190, 	__irq191, 	__irq192, 	__irq193, 	__irq194, 
	__irq195, 	__irq196, 	__irq197, 	__irq198, 	__irq199, 
	__irq200, 	__irq201, 	__irq202, 	__irq203, 	__irq204, 
	__irq205, 	__irq206, 	__irq207, 	__irq208, 	__irq209, 
	__irq210, 	__irq211, 	__irq212, 	__irq213, 	__irq214, 
	__irq215, 	__irq216, 	__irq217, 	__irq218, 	__irq219, 
	__irq220, 	__irq221, 	__irq222, 	__irq223, 	__irq224, 
	__irq225, 	__irq226, 	__irq227, 	__irq228, 	__irq229, 
	__irq230, 	__irq231, 	__irq232, 	__irq233, 	__irq234, 
	__irq235, 	__irq236, 	__irq237, 	__irq238, 	__irq239, 
	__irq240, 	__irq241, 	__irq242, 	__irq243, 	__irq244, 
	__irq245, 	__irq246, 	__irq247, 	__irq248, 	__irq249, 
	__irq250, 	__irq251, 	__irq252, 	__irq253, 	__irq254, 
	__irq255
};

/**
 * Initialises the Interrupt Descriptor Table.
 * @return Returns true if initialisation was successful, false otherwise.
 */
bool IDT::init()
{
	// Clear out the IDT
	bzero(__idt, sizeof(__idt));
	_max_index = 0;
	
	// Initialise all IDT entries to their corresponding entry points
	for (unsigned int i = 0; i < MAX_NR_IDT_ENTRIES && i < MAX_IRQS; i++) {
		register_interrupt_gate(i, (uintptr_t)irq_entry_points[i], 0x08, 0);
	}
		
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
