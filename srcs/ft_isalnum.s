extern _ft_isalpha
extern _ft_isdigit
global _ft_isalnum

section .text

_ft_isalnum:
	cmp		rdi, byte 0
	jb		ret
	call	_ft_isalpha
	cmp		rax, 1
	je		ret
	call	_ft_isdigit

ret:
	ret
