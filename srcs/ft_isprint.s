global _ft_isprint

section .text

_ft_isprint:
	mov		rax, 0
	cmp		rdi, byte 32
	jb		ret
	cmp		rdi, byte 126
	ja		ret
	mov		rax, 1

ret:
	ret
