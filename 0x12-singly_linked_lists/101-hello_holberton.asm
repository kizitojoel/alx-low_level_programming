section .data

str: db "Hello, Holberton",10,0
stringformat: db "%s",0

	section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp

	mov rsi, str
	mov rdi, stringformat
	call printf

	pop rbp
	mov rax, 0
	ret
