global _ft_isdigit

section .text

_ft_isdigit:
	mov		rax, 0
	cmp		rdi, byte 48
	jb		ret
	cmp		rdi, byte 57
	ja		ret
	mov		rax, 1

ret:
	ret
