global _ft_isascii

section .text

_ft_isascii:
	mov		rax, 0
	cmp		rdi, byte 127
	ja		ret
	mov		rax, 1

ret:
	ret
