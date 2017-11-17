global _ft_strlen

section .text

_ft_strlen:
	mov		rbx, 0

comp:
	cmp		[rdi], byte 0
	je		ret

loop:
	inc		rbx
	inc		rdi
	jmp		comp

ret:
	mov		rax, rbx
	ret
