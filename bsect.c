LOCI=0x500

entry start
start:
	mov ax,#LOCI
	mov es,ax
	mov bx,#0

	mov dl,#0
	mov dh,#0
	mov ch,#0
	mov cl,#2
	mov al,#1

	mov ah,#2

	int 0x13

	jmpi 0,#LOCI
