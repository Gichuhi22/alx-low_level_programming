global main
esternal printf


SECTION .data       ;initialized data

	msg: db "Hello, Holberton",0xA
	msg_length equ $ -msg

SECTION .text       ;asm code

	main:
		push ebp
		mov ebp, esp

		push msg
		call printf

		mov esp, ebp
		pop ebp
		ret
