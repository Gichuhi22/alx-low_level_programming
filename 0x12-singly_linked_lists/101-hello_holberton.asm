
global main

SECTION .data:		;initialized data

msg: db "Hello, Holberton",0xA,0 ;this is our message
msg_length equ $-msg

SECTION .text:		;asm code

main: 
	mov eax, 0x4
	mov ebx, 1
	mov ecx, msg
	mov edx, msg_length
	int 0x80

	mov eax, 0x1
	mov ebx, 0
	int 0x80


SECTION .bss:		;uninitialized variables
