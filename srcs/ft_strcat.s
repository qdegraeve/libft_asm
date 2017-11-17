extern	_ft_strlen
global	_ft_strcat

_ft_strcat:
	mov		rcx, rdi
	mov		r10, rdi
	call	_ft_strlen
	add		rcx, qword rax


comp:
	cmp		[rsi], byte 0
	je		ret
;
loop:
	mov		al, [rsi]
	mov		[rcx], al
	inc		rcx
	inc		rsi
	jmp		comp

ret:
	mov		rax, r10
	ret
