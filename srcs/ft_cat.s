%define		sys(n) (0x2000000 | n)
%define		SYSREAD 3
%define		SYSWRITE 4

%macro print_string 3
	mov		rax, sys(SYSWRITE)
	mov		rdi, %1
	mov		rsi, %2
	mov		rdx, %3
	syscall
%endmacro

extern		_puts
global		_ft_cat

section .bss
	buffer	resb 256

section .text

_ft_cat:
	push	rbp
	mov		rbp, rsp
	cmp		rdi, 0
	jl		ret
	push	rdi

read:
	mov		rax, sys(SYSREAD)
	mov		rdi, [rsp]
	mov		rsi, buffer
	mov		rdx, 255
	syscall

comp:
	cmp		rax, 0
	jl		ret
	mov		r10, rax
	print_string	1, rsi, r10
	cmp		r10, 0
	jne		read

ret:
	pop		rdi
	pop		rbp
	ret
