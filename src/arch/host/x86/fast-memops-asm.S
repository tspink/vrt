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

	// Store zeroes
	rep stosq %rax, %es:(%rdi)

	// Finished.
	ret

.globl __bzero
.type __bzero, %function
__bzero:
	cld

	mov %rsi, %rcx
	shr $3, %rcx

	xor %eax, %eax
	
	rep stosq %rax, %es:(%rdi)

	movq %rsi, %rcx
	and $3, %rcx

.align 16
2:
	rep stosb %al, %es:(%rdi)

	mov %rdi, %rax
	ret
