%macro print_string 3
	mov		rax, 0x2000004
	mov		rdi, %1
	mov		rsi, %2
	mov		rdx, %3
	syscall
%endmacro

extern	_ft_strlen
global	_ft_fputs

section	.data
	null_string db "(null)", 0
	newline		db 10, 0

section .text

_ft_fputs:
	push	rbp
	mov		rbp, rsp
	push	rdi
	test	rsi, rsi
	jl		ret
	cmp		rdi, 0
	jne		prints
	lea		rdi, [rel null_string]

prints:
	mov		r10, rdi
	call	_ft_strlen
	mov		rdx, rax
	mov		r12, rsi
	print_string r12, r10, rdx
	cmp		rax, 0
	je		ret
	print_string r12, newline, 1
	cmp		rax, 0
	je		ret
	mov		rax, 10

ret:
	pop		rdi
	pop		rbp
	ret
