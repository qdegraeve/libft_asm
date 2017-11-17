global _ft_islower

section .text

_ft_islower:
	mov		rax, 0
	cmp		rdi, byte 97
	jl		ret
	cmp		rdi, byte 122
	jg		ret
	mov		rax, 1

ret:
	ret
