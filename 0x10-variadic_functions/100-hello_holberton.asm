	global  _main
	extern  write

	section .text
_main:
	push    message
	call    write
	add     esp, 4
	ret
message:
	    db  'Hello, Holberton', 10, 0
