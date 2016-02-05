.data
sh:
	.string "/bin/sh"
.text
.globl main
main:
	movl	$11,%eax
	movl	$sh, %ebx
	movl	$0,%ecx
	movl	$0, %edx
	int	$0x80
	
	movl	$0,%eax 
	ret
	
