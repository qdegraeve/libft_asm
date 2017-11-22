%macro print_string 3
	mov		rax, 0x2000004
	mov		rdi, %1
	mov		rsi, %2
	mov		rdx, %3
	syscall
%endmacro

extern	_ft_strlen
global	_ft_putstr

section	.data
	null_string db "(null)", 0

section .text

_ft_putstr:
	push	rbp
	mov		rbp, rsp
	push	rdi
	cmp		rdi, 0
	jne		prints
	lea		rdi, [rel null_string]

prints:
	mov		r10, rdi
	call	_ft_strlen
	mov		rdx, rax
	print_string 1, r10, rdx
	cmp		rax, 0
	je		ret
	mov		rax, rdx

ret:
	pop		rdi
	pop		rbp
	ret
