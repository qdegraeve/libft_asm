global _ft_strlen

section .text

_ft_strlen:
	push	rbp
	mov		rbp, rsp
	push	rdi
	sub		al, al
	mov		rcx, 0
	not		rcx
	cld
	repne	scasb

ret:
	not		rcx
	sub		rcx, 1
	pop		rdi
	mov		rax, rcx
	pop		rbp
	ret
