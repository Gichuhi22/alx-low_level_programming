
global main
external printf

SECTION .data:		;initialized data

msg: db "Hello, Holberton",0xA,0 ;this is our message
msg_length equ $-msg

SECTION .text:		;asm code

main:
	push ebp
	mov ebp, esp

	push msg
	call printf

	mov esp, ebp
	pop ebp
	ret

