.text

.align 16

.globl __pzero
.type __pzero, %function
__pzero:
	// Clear the direction flag (DF)
	cld

	// Load the number of pages to clear into ECX, and multiply by 512
	// to determine the number of 8-byte units that will be cleared.
	mov %esi, %ecx
	shl $9, %ecx

	// Clear EAX
	xor %eax, %eax

	// Store zeros
	rep stosq %rax, %es:(%rdi)

	// Finished.
	ret

.align 16
.globl __memcpy
.type __memcpy, %function
__memcpy:
	mov %rdi, %rax

	cld

	mov %rdx, %rcx
	shr $3, %rcx
	
	rep movsq %ds:(%rsi), %es:(%rdi)

	mov %rdx, %rcx
	and $7, %rcx

	rep movsb %ds:(%rsi), %es:(%rdi)
	
	ret

//
// WARNING! The following two functions are tightly coupled, in a non-obvious way!
//

.align 16
.globl __memset
.type __memset, %function
__memset:
	test %rsi, %rsi
	jz 1f

	cld
	mov %esi, %eax
	mov %rdx, %rcx
	jmp 2f

1:
	mov %rdx, %rsi

.align 16
.globl __bzero
.type __bzero, %function
__bzero:
	// Clear the direction flag (DF)
	cld

	// Load the number of bytes to clear, and divide by eight.
	mov %rsi, %rcx
	shr $3, %rcx

	// Clear EAX
	xor %eax, %eax
	
	// Store zeros in 8-byte increments
	rep stosq %rax, %es:(%rdi)

	// Load the number of bytes to clear, and modulo by eight.  It's okay to use
	// the 32-bit registers here, because we're about to mask by 0b11 anyway.
	mov %esi, %ecx
	and $3, %ecx

.align 16
2:
	// Clear the remaining bytes in 1-byte increments
	rep stosb %al, %es:(%rdi)

	// Done
	ret