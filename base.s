.data
hw:
	.string "Hello World\n"
.text
.globl main
main:
	movl	$4,%eax
	movl	$1,%ebx
	movl	$hw, %ecx
	movl	$12, %edx
	int	$0x80
	
	movl	$10,%eax 
	ret
	
