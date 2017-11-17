global _ft_isupper

section .text

_ft_isupper:
	mov		rax, 0
	cmp		rdi, byte 65
	jl		ret
	cmp		rdi, byte 90
	jg		ret
	mov		rax, 1

ret:
	ret
