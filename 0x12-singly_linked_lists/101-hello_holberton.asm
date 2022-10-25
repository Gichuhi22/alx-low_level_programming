SECTION .data		;initialized data

msg: db "Hello, Holberton",10,0	;this is our message


SECTION .text		;asm code

external printf
global main
main:
	push ebp
	mov ebp, esp

	push msg
	call printf

	mov esp, ebp
	pop ebp
	ret


SECTION .bss		;uninitialized variables
