.code64
.text

.align 16

.globl execution_trampoline
.type execution_trampoline,%function
execution_trampoline:
	push %r14
	push %r13
	push %r12
	push %rbx
	push %rbp
	
	// Store the frame pointer, and allocate temporary stack storage.  Use r14
	// for frame pointer storage, as RBP is used for the register file.
	mov %rsp, %r14
	sub $0x100, %rsp

	callq *%rdi // Run the Code

	// Restore the stack pointer
	mov %r14, %rsp

	pop %rbp
	pop %rbx
	pop %r12
	pop %r13
	pop %r14

	// Return
	retq
.size execution_trampoline, .-execution_trampoline
