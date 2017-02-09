ENTRY(multiboot_start)

SECTIONS
{
	. = 1M;
	_IMAGE_START = .;

	_STARTUP_START = .;
	.startup.header : AT(_STARTUP_START) { *(.multiboot.header) }

	. = ALIGN(16);

	.startup.text :
	{
		*(.multiboot.text)
		*(.startup.text32)
		*(.startup.text64)
		*(.earlyinit.text)
	}

	.startup.data :
	{
		*(.startup.data)
	}

	_STARTUP_END = .;

	. = ALIGN(4096);
	_KERNEL_LMA_START = .;

	. = 0xFFFFFFFF80000000 + _KERNEL_LMA_START;

	_KERNEL_VMA_START = .;

	_TEXT_START = .;
	.text : AT(_KERNEL_LMA_START)
	{
		*(.text)
		*(.text.*)
	}
	_TEXT_END = .;

	. = ALIGN(4096);

	_RODATA_START = .;
	.rodata :
	{
		*(.rodata)
		*(.rodata.*)
	}
	_RODATA_END = .;
	
	. = ALIGN(4096);

	_DATA_START = .;
	.data :
	{
		*(.data)

		. = ALIGN(16);

		__init_array_start = .;
		KEEP(*(.init_array*))
		__init_array_end = .;
	}
	_DATA_END = .;

	. = ALIGN(4096);

	_BSS_START = .;
	.bss : { *(.bss) }
	_BSS_END = .;

	. = ALIGN(4096);
	_STACK_TOP = .;

	_IMAGE_END = . - 0xFFFFFFFF80000000;

	. += 8K;
	_STACK_BOTTOM = .;
	_PAGE_DESCRIPTORS_START = .;
	
	/DISCARD/ :
	{
		*(.comment)
	}
}

