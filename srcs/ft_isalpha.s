extern _ft_isupper
extern _ft_islower
global _ft_isalpha

section .text

_ft_isalpha:
	call	_ft_isupper
	cmp		rax, 1
	je		ret
	call	_ft_islower

ret:
	ret
