/* arch/host/x86/start64.S
 *
 * CAPTIVE Virtual Runtime
 *
 * Copyright (C) University of Edinburgh 2017.  All Rights Reserved.
 * Tom Spink <tspink@inf.ed.ac.uk>
 */
.code64
.section .startup.text64, "ax"

.align 16

.globl start64
.type start64, %function
start64:
	// Re-initialise segment registers
	mov $0x10, %eax
	mov %ax, %ds
	mov %ax, %es
	mov %ax, %ss

	xor %eax, %eax
	mov %ax, %fs
	mov %ax, %gs

	// Restore the multiboot structure address from EBP into the
	// first parameter of the initialisation entrypoint.
	mov %ebp, %edi

	// Set-up an 8kB stack
	lea _STACK_BOTTOM, %rsp

	// Jump to the x86 initialisation entrypoint.
	lea x86_arch_start, %rax
	jmp *%rax
