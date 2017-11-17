section .text ; Use this section for code
	global _ft_bzero

_ft_bzero:
	mov rcx, rdi
	mov r10, rsi
	cmp r10, 0
	jle _end_function

_fills_loop:
	dec r10
	mov [rcx], byte 0
	inc rcx
	cmp r10, 0
	jne  _fills_loop

_end_function:
	ret
