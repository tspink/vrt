#include <arch/host/x86/dt.h>

using namespace vrt::arch::host::x86;

/**
 * Initialises the Global Descriptor Table
 * @return Returns true if initialisation was successful, false otherwise.
 */
bool GDT::init()
{
	// Clear the GDT.
	erase();
	
	// Initial null segment.
	if (!add_null()) return false;					// 0
	
	// Kernel code and data segments.
	if (!add_code_segment(0)) return false;			// 8
	if (!add_data_segment(0)) return false;			// 10

	// User code and data segments.
	if (!add_code_segment(3)) return false;			// 18
	if (!add_data_segment(3)) return false;			// 20
		
	return reload();
}

/**
 * Reloads the Global Descriptor Table after modification of the entries.
 * @return Returns true if the reload was successful, false otherwise.
 */
bool GDT::reload()
{
	// Load the address of the GDT into the GDTR
	const GDTPointer ptr = { .length = (uint16_t)(_current * 8u), .ptr = __gdt };
	asm volatile("lgdt %0" :: "m"(ptr));
	
	// Reload segment registers.
	asm volatile("mov %0, %%ds" :: "a"(0x10));
	asm volatile("mov %0, %%es" :: "a"(0x10));
	asm volatile("mov %0, %%ss" :: "a"(0x10));
	
	// TODO: Think about reloading the CS register, which needs to
	// be done with a longjmp.  This was previously done in the assembly
	// start-up code, with the temporary GDT, but it should probably be
	// done with the new GDT.
	
	return true;
}

/**
 * Retrieves the base address of the current GDT
 * @return Returns the base address present in the GDTR
 */
uintptr_t GDT::get_ptr()
{
	GDTPointer ptr;
	asm volatile("sgdt %0" : "=m"(ptr));
	
	return (uintptr_t)ptr.ptr;
}


/**
 * Erases any existing entries in the GDT.
 */
void GDT::erase()
{
	// Just reset the _current pointer, so that adding entries will overwrite
	// existing ones.
	_current = 0;
}

/**
 * Inserts a NULL segment descriptor into the GDT.
 * @return Returns true if the insertion was successful, false otherwise.
 */
bool GDT::add_null()
{
	if (_current >= MAX_NR_GDT_ENTRIES) return false;
	
	__gdt[_current++] = 0;
	return true;
}

/**
 * Inserts a 64-bit code segment descriptor into the GDT.
 * @return Returns true if the insertion was successful, false otherwise.
 */
bool GDT::add_code_segment(uint8_t dpl)
{
	if (_current >= MAX_NR_GDT_ENTRIES) return false;
	
	CodeSegmentDescriptor desc(dpl);
	
	__gdt[_current++] = desc.bits;
	return true;
}

/**
 * Inserts a data segment descriptor into the GDT.
 * @param dpl The privilege level that this descriptor describes.
 * @return Returns true if the insertion was successful, false otherwise.
 */
bool GDT::add_data_segment(uint8_t dpl)
{
	if (_current >= MAX_NR_GDT_ENTRIES) return false;
	
	DataSegmentDescriptor desc(dpl);
	
	__gdt[_current++] = desc.bits;
	return true;
}

/**
 * Inserts a TSS descriptor into the GDT.
 * @param ptr The linear address of the TSS structure.
 * @return Returns true if the insertion was successful, false otherwise.
 */
bool GDT::add_tss(TSS& tss)
{
	void *ptr = (void *)tss.__tss;
	size_t size = sizeof(tss.__tss);
			
	// Need -1 here, because the TSS descriptor takes up TWO GDT slots.
	if (_current >= MAX_NR_GDT_ENTRIES - 1) return false;

	TSSDescriptor desc(ptr, size);
	
	__gdt[_current++] = desc.bits_low;
	__gdt[_current++] = desc.bits_high;
	
	return true;
}
