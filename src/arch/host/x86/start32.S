/* arch/host/x86/start32.S
 *
 * CAPTIVE Virtual Runtime
 *
 * Copyright (C) University of Edinburgh 2017.  All Rights Reserved.
 * Tom Spink <tspink@inf.ed.ac.uk>
 */
.code32
.section .startup.text32, "ax"

.align 16

/**
 * 32-bit kernel entry point
 */
.globl start32
.type start32, %function
start32:
	// Initialise a stack for clearing the flags, and calling zero_pages32.  The maximum depth of this
	// stack should be 4 bytes, as we're in 32-bit mode at this point, and only use the stack for clearing
	// EFLAGS, and using the zero page helper function.
	mov $0x1000, %esp

	// Reset EFLAGS
    pushl $0
	popf

	// Load a null IDT
	lidt idtp

	// Prepare the initial page tables, with an identity map for
	// lower memory

	// Zero out five pages, starting from 0x1000
	movl $0x1000, %ebx
	movl $5, %ecx
	call zero_pages32

	// Update cr3 with the address of the PML4
	mov %ebx, %cr3

	// Create the initial page tables.  EDI points to the first page
	// for use.
	call create_initial_pagetables

	// Disable the PIC
	mov $0xff, %al
    out %al, $0xa1
    out %al, $0x21

	// CR4 :=
    mov $0x6b0, %eax
    mov %eax, %cr4

	// EFER :=
    mov $0xC0000080, %ecx
    rdmsr    
    or $0x000000901, %eax
    wrmsr

	// CR0 := PG, PE, MP, EM, WP
	mov $0x80010007, %eax
    mov %eax, %cr0

	// Initialise the temporary GDT
    lgdt gdtp
 
	// Long jump to 64-bit code
    ljmp $0x8, $start64
 
/**
 * Quickly zeroes out a number of 4k pages.
 * @edi: Base address of page.
 * @ecx: Number of pages.
 *
 * Clobbers: %edi, %eax, %ecx & flags
 */
.align 16
.type zero_pages32, %function
zero_pages32:
	mov %ebx, %edi
	xor %eax, %eax
	cld
	shl $10, %ecx
	repz stosl
	ret

/**
 * Creates the initial page tables.
 * Uses 0x1000 -> PML4
 *
 */
.align 16
.type create_initial_pagetables, %function
create_initial_pagetables:
	movl $0x2003, 0x000(%ebx)	// PDP @ 0x2000 (P, RW)	LOW VMEM
	movl $0x4003, 0xff8(%ebx)	// PDP @ 0x3000 (P, RW) HI  VMEM
	
	// PDP @ 0x2000		(LOW VMEM)
	movl $0x2000, %ebx
	movl $0x3003, (%ebx)		// PD @ 0x3000 (P, RW)

	// PD  @ 0x3000		(LOW VMEM)
	movl $0x3000, %ebx
	movl $0x000083, 0(%ebx)		// 2MB 1:1 Mapping
	movl $0x200083, 8(%ebx)		// 2MB 1:1 Mapping

	// PDP @ 0x4000		(HI VMEM)
	movl $0x4000, %ebx
	movl $0x5003, 0xff0(%ebx)		// PD @ 0x5000 (P, RW)

	// PD  @ 0x5000		(HI VMEM)
	movl $0x5000, %ebx
	movl $0x000083, 0(%ebx)		// 2MB 1:1 Mapping
	movl $0x200083, 8(%ebx)		// 2MB 1:1 Mapping

	ret

.section .startup.data, "a"

/* Null IDT pointer */
.align 4
idtp:
	.word 0
	.long 0

/* Temporary GDT */
.align 4
gdt:
    .quad 0x0000000000000000
    .quad 0x00209A0000000000
    .quad 0x0000920000000000
gdt_end:

/* Temporary GDT pointer */
.align 4
gdtp:
	.word (gdt_end - gdt)
	.long gdt

