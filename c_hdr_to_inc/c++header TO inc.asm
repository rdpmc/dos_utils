.model tiny
.code
.486
p equ push

of equ offset


         org       100h
Start:
mov ah,3ch
xor cx,cx
call nx0
db 'd3d8_my.inc',0
nx0:
pop dx
int 21h
mov bp,ax
mov ax,cs
shl ax,2
p ax
mov ax,3d02h
call nx
db '1.log',0
nx:
pop dx
int 21h
mov bx,ax
mov dx,of buf
mov ah,3fh
dec cx
int 21h
mov cx,ax
pop ds
xor si,si
cld
mov di,dx
xor dx,dx
l1:
mov eax,'fed#'
scasd
jz j1
bk1:
sub di,3
cmp di,0fff0h
jne l1
exi:
mov ah,3eh
int 21h
xor dx,dx
mov cx,si
mov ah,40h
xchg bp,bx
int 21h
mov ah,3eh
int 21h
ret
bk0:
sub di,8
jmp l1
j1:
mov eax,' eni'
scasd
jz j2
sub di,4
jmp bk1
j2:
push ds
pop es
p cs
pop ds
xchg di,si
mov al,';'
or dx,dx
jne j4
stosb
j2a:
lodsb
cmp al,'_'
je j3
stosb
jmp j2a
j3:
mov ax,0a0dh
stosw
dec si
j4:
lodsb
cmp al,'_'
jne j4
j4a:
lodsb
cmp al,'('
je j5
stosb
jmp j4a
j5:
mov ax,'0='
stosw 
call toasc
stosd
dec di
mov al,'h'
stosb
mov ax,'; '
stosw
shl dx,2
call toasc
shr dx,2
inc dx
stosd 
mov ax,0a0dh
stosw
p es
pop ds
p cs
pop es
xchg di,si
mov al,0ah
xor cx,cx
dec cx
repne scasb
inc di
mov ax,0a0dh
jz1:
scasw
jz jz1
dec di
cmp dword ptr es:[edi],'epyt'
jne bk0
cmp dword ptr es:[edi+4],' fed'
jne bk0
xor dx,dx
jmp bk0
toasc:
p dx
xor eax,eax
mov cx,3
lt1:
rol eax,8
mov al,dl
ror dx,4
and al,1111b
add al,30h
cmp al,39h
jbe jbe1
add al,7
jbe1:
loop lt1
pop dx
ret

buf:



         End       Start

