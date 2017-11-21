extern		_ft_strlen
extern		_bzero
extern		_ft_memcpy
extern		_malloc
extern		_puts
global		_ft_strdup

section .text

_ft_strdup:
	push	rbp
	mov		rbp, rsp
	push	rdi ; save first param in stack frame
	call	_ft_strlen ; call strlen en param 1 to get size for malloc
	push	rax ; save size of str
	mov		rdi, rax ; size -> first param for malloc
	add		rdi, 1 ; add 1 to reserve space for last \0 char
	call	_malloc
	pop		rdx ; pop size of str into rdx (3rd param for memcpy)
	mov		rcx, rdx ; copy size in iteration register for rep
	add		rcx, 1 ; do not forget last \0 char
	test	rax, rax ; test return of malloc
	je		ret ; if NULL (malloc failed) -> go to end of function
	push	rax ; save address of ptr returned by malloc
	mov		rdi, [rsp] ; mov value of stack pointer (ptr malloced) in rdi for stosb
	mov		rax, 0 ; mov 0 in rax for stosb
	cld ; put DF flag to 0 (decrement)
	rep		stosq ; repeat stosq until rcx-- == 0
	pop		rdi ; get address of ptr malloced from stack
	mov		rsi, [rsp] ; get address of string to copy from stack (but leave it there for later use)
	call	_ft_memcpy

ret:
	pop		rdi ; put back first param of function as initially
	pop		rbp
	ret
