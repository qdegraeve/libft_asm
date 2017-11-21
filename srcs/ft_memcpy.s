extern		_ft_puts
global		_ft_memcpy

section .text

_ft_memcpy:
	push	rbp
	mov		rbp, rsp
	push	rdi
	push	rsi
	mov		rcx, rdx
	cld
	rep		movsb
	pop		rsi
	pop		rdi
	mov		rax, rdi
	pop		rbp
	ret
