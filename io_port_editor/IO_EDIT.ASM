real-time show;ESC->edit_mode;LB->select bit to edit;MB->refresh port;ENTER->back to real-time show;ESC-exit
.model tiny
.code
.486
org 100h
m1:
mov ah,3
int 10h
push 0b800h
pop es
xor di,di
xor bp,bp
go:
mov cx,24
l:
push cx
mov cx,4
l0:
mov dx,bp
in al,dx
inc bp
push cx
push ax
xor eax,eax
mov cx,4
l1:
push dx
and dx,1111b
sub dl,9
js j1
jz j1
add dl,7
j1:
add dl,39h
or eax,edx
rol eax,8
pop dx
ror dx,4
loop l1
ror eax,8
call vid
mov ax,'::'
stosw
pop bx
mov cl,7
l3:
mov eax,30303030h
l3a:
bt ebx,ecx
jnc j2_
inc al
j2_:
ror eax,8
cmp cl,4
jne j3
call vid
loop l3
j3:
or cx,cx
jz j_
loop l3a
jmp l3a
j_:
call vid
pop cx
xor eax,eax
stosd
loop l0
pop cx
mov ax,25
sub ax,cx
mov bl,160
mul bl
mov di,ax
loop l
mov si,300
xor di,di
j2:
dec si
jz go_
mov ah,1
int 16h
jz j2
cmp al,1bh
je exit
xor ax,ax
int 16h
or al,al
jnz j2
cmp ah,48h
je up_
cmp ah,50h
jne j2
dwn_:
mov ax,bp
sub ax,24*8
js go_
mov bp,ax
jmp go
up_:
mov ax,bp
add ax,24*4
jc j2
jmp go

go_:
sub bp,24*4
jmp go

vid proc
push ecx 
push eax
mov cx,4
ll1:
stosb
mov al,0fh
stosb
ror eax,8
loop ll1
pop eax
pop ecx
ret
vid endp
exit:
xor ax,ax
int 16h
xor ax,ax
int 33h
inc ax
jnz rex
inc ax
int 33h
mov ax,0ch
mov cx,1010b
mov dx,offset drvm
push cs
pop es
int 33h
push 0b800h
pop es
cmp_:
cmp f_,2
je sc
cmp f_,1
jne cmp_
mov f_,0
l5:
mov ah,11h
int 16h
jz l5
xor ax,ax
int 16h
cmp ah,1ch
je __
cmp ax,11bh
je rex
or al,al
jnz l5
cmp ah,50h
je _0_
cmp ah,48h
je _1_
__:
mov ah,21h
int 33h
xor di,di
sub bp,24*4
jmp go 
_1_:
mov dl,'1'
bk2:
call xy
mov di,bx
mov i,1
jmp cmp_
_0_:
mov dl,'0'
jmp bk2
sc:
cmp i,1
mov f_,0
jne cmp_
mov i,0
std 
mov cx,2*9
mov al,':'
repne scasb
jcxz l5
mov cx,4
mov si,di
push es
pop ds
xor bx,bx
xor ax,ax
dec si
l8:
dec si
lodsb
cmp al,39h
jbe l8a
sub al,7
l8a:
sub al,30h
bk6:
add bx,ax
ror bx,4
loop l8
go2:
mov dx,bx
cld
add si,5*2+1
xor bx,bx
mov ecx,8
l7:
lodsb
inc si
dec cx
sub al,30h
jz j6
bts ebx,ecx
bk4:
inc cx
loop l7
mov al,bl
out dx,al
push cs
pop ds
jmp cmp_
j6:
btr ebx,ecx
jmp bk4



xy proc
mov ax,y_
shr ax,2
mov bx,80
mul bl
mov bx,x_
shr bx,2
add bx,ax
mov ah,0fh
mov al,dl
mov es:[bx],ax
ret
xy endp


mo1:
mov ax,5
mov bx,1
int 33h
mov si,cx
mov di,dx
mov ax,6
mov bx,1
int 33h
cmp cx,si
jne mo1
cmp dx,di
jne mo1


drvm proc
test bx,10b
jz drv1
mov cs:[f_],2
jmp nx1
drv1:
mov cs:[f_],1
nx1:
mov cs:[x_],cx
mov cs:[y_],dx
retf
f_ db 0
x_ dw 0
y_ dw 0
drvm endp

rex:
ret
i db 0
end m1