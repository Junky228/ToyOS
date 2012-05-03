entry start
start:
	mov ax,#0xb800
	mov es,ax
	seg es
	mov [0],#0x41
	seg es
	mov [1],#0x1f
loop1: jmp loop1
