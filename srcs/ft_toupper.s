extern		_ft_islower
global		_ft_toupper

section .text

_ft_toupper:
	call	_ft_islower
	cmp		rax, 0
	je		ret
	sub		rdi, byte 32

ret:
	mov		rax, rdi
	ret
