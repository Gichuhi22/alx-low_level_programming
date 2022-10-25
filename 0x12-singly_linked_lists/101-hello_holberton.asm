
global main
external printf

SECTION .data:		;initialized data

msg db "Hello, Holberton",0xA ;this is our message
msg_length equ $ -msg

SECTION .text:	;asm code
		global _start
_start:
		mov edx, len
		mov ecx, msg
		mov ebx, 1
		mov eax, 4
		int 0x80

		mov eax, 1
		int 0x080

