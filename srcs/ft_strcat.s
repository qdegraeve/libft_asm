extern	_ft_strlen
extern	_ft_memcpy
global	_ft_strcat

_ft_strcat:

	push	rbp
	mov		rbp, rsp
	push	rdi
	push	rsi
	sub		al, al
	mov		rcx, 0
	not		rcx
	cld
	repne	scasb
	dec		rdi
	push	rdi
	mov		rdi, [rsp + 8]
	call	_ft_strlen
	pop		rdi
	mov		rsi, [rsp]
	inc		rax
	mov		rdx, rax
	call	_ft_memcpy
	pop		rsi
	pop		rdi
	pop		rbp
	ret
