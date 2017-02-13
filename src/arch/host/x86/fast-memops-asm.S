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
	// Store the incoming pointer into the return register RAX.
	mov %rdi, %rax

	// Clear the direction flag (DF)
	cld

	// Copy 8-byte chunks from SRC (RSI) to DST (RDI) until there's no
	// chunks of this size remaining.
	mov %rdx, %rcx
	shr $3, %rcx
	
	rep movsq %ds:(%rsi), %es:(%rdi)

	// Copy the remaining bytes in 1-byte chunks.
	mov %edx, %ecx
	and $7, %ecx

	rep movsb %ds:(%rsi), %es:(%rdi)
	
	// RAX was set-up at the start of this routine.
	ret

//
// WARNING! The following two functions are tightly coupled, in a non-obvious way!
//

.align 16
.globl __memset
.type __memset, %function
__memset:
	// Take a look at the incoming 'set' byte, and if it's zero, then
	// branch forward to (1).
	test %esi, %esi
	jz 1f

	// If it's non zero, then clear the direction flag, load the 'set'
	// byte into EAX and load the size into RCX.
	cld
	mov %esi, %eax
	mov %rdx, %rcx

	// Repeatedly put AL into memory, until RCX is exhausted.
	rep stosb %al, %es:(%rdi)
	ret

	// If the incoming 'set' byte was zero, then really, we want to
	// do an efficient __bzero.  So, move the incoming 'size' parameter
	// into the right place for __bzero, and fall-through into the
	// function.
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
	// the 32-bit registers here, because we're about to mask by 0b111 anyway.
	mov %esi, %ecx
	and $7, %ecx

	// Clear the remaining bytes in 1-byte increments
	rep stosb %al, %es:(%rdi)

	// Done
	ret
