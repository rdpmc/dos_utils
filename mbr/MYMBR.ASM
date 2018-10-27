.model tiny
.code
.486
p equ push
org 100h
m1:
mov dx,offset ms1
mov ah,9
int 21h
xor ax,ax
int 16h
cmp ah,1ch
jne j0
mov ah,3
call r
ret
j0:
mov ah,2
call r
mov ax,3d02h
mov dx,offset f1
int 21h
jnc r1
ret
r1:
mov bx,ax
mov ah,40h
mov dx,offset m1
mov cx,mbr-m1+513
int 21h
jnc r2
ret
r2:
mov ah,3eh
int 21h
ret
r:
mov al,1
mov dx,80h
mov cx,1
mov bx,offset mbr
push ds
pop es
int 13h
ret
ms1 db 'Press ENTER to write correct MBR. Press ESC to save current MBR in me$'
f1 db 'mymbr.com',0
mbr:
end m1