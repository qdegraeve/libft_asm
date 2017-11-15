section .text
	global _ft_isalnum

_ft_isalnum:
	cmp		edi, 0
	jb		_end
	mov		rax, 0

_isnum:
	cmp		edi, 48
	jl		_end
	cmp		edi, 57
	jg		_isupper
	mov		rax, 1
	jmp		_end

_isupper:
	cmp		edi, 65
	jl		_end
	cmp		edi, 90
	jg		_islower
	mov		rax, 1
	jmp		_end

_islower:
	cmp		edi, 97
	jl		_end
	cmp		edi, 122
	jg		_end
	mov		rax, 1

_end:
	ret
