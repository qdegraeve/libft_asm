section .text
	global _ft_strlen

_ft_strlen:
	mov		rbx, 0

_cmp
	mov		cl, [rdi]
	cmp		cl, 0
	je		_ret

_loop:
	inc		rbx
	inc		rdi
	jmp		_cmp

_ret:
	mov		rax, rbx
	ret
