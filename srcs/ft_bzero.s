section .text ; Use this section for code
	extern	_ft_memset
	global	_ft_bzero

_ft_bzero:
	push	rbp
	mov		rbp, rsp
	push	rdi
	push	rsi
	push	rdx
	mov		rdx, rsi
	mov		rsi, 0
	call	_ft_memset
	pop		rdx
	pop		rsi
	pop		rdi
	pop		rbp
	ret
;	mov rcx, rdi
;	mov r10, rsi
;	cmp r10, 0
;	jle _end_function
;
;_fills_loop:
;	dec r10
;	mov [rcx], byte 0
;	inc rcx
;	cmp r10, 0
;	jne  _fills_loop
;
;_end_function:
;	pop		rsp
;	ret
