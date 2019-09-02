	.file	"simple_write.c"
	.section	.rodata
.LC0:
	.string	"Here is some data\n"
	.align 8
.LC1:
	.string	"A write error has occurred on file descriptor 1\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$18, %edx
	movl	$.LC0, %esi
	movl	$1, %edi
	call	write
	cmpq	$18, %rax
	je	.L2
	movl	$46, %edx
	movl	$.LC1, %esi
	movl	$2, %edi
	call	write
.L2:
	movl	$0, %edi
	call	exit
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.11) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
