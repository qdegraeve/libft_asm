global		_ft_memset

section .text

_ft_memset:
	push	rbp
	mov		rbp, rsp
	mov		rcx, rdx
	push	rdi
	mov		rax, rsi
	rep		stosb
	pop		rax
	pop		rbp
	ret
