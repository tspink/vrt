/* arch/host/x86/boot.S
 *
 * CAPTIVE Virtual Runtime
 *
 * Copyright (C) University of Edinburgh 2017.  All Rights Reserved.
 * Tom Spink <tspink@inf.ed.ac.uk>
 */
#define MULTIBOOT_HEADER_FLAGS  0x00000003
#define MULTIBOOT_HEADER_MAGIC  0x1BADB002

.section .multiboot.header, "a"

.type multiboot_header, %object
multiboot_header:
    .long MULTIBOOT_HEADER_MAGIC
    .long MULTIBOOT_HEADER_FLAGS
    .long -(MULTIBOOT_HEADER_MAGIC + MULTIBOOT_HEADER_FLAGS)

.code32

.section .multiboot.text, "ax"

/*
 * Multiboot entry point
 */

.globl multiboot_start
.type multiboot_start, %function
multiboot_start:
	// Disable interrupts
	cli

	// Make sure the incoming magic number is correct
	cmp $0x2BADB002, %eax
	jne panic

	mov %ebx, %ebp

	jmp start32

panic:
	//

1:
	pause
	hlt
	jmp 1b
