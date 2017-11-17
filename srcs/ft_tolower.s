extern		_ft_isupper
global		_ft_tolower

section .text

_ft_tolower:
	call	_ft_isupper
	cmp		rax, 0
	je		end
	add		rdi, byte 32

end:
	mov		rax, rdi
	ret
