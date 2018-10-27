.model tiny
.code
.486
org 100h
m1:
cmp i,1
je m1a
mov ah,2
call i13
mov i,1
call rewr
m1a:
mov dx,offset ms1
call viv
m2:
xor ax,ax
int 16h
or al,al
jnz m2
cmp ah,44h
je do
cmp ah,3bh
jne m2

undo:	;**********UNDO*********
mov ah,3
call i13
mov dx,offset ok
call viv
ret
	;*************DO********
do:
mov ah,2
call i13
jnc d1
mov dx,offset ok_n
call viv
ret
d1:
mov dx,offset ms2
call viv
mov cx,4
l1:
xor ax,ax
int 16h
rol ebx,8
mov bl,al
loop l1
mov dword ptr [zm1+3],ebx
mov word ptr [mbr],87e9h
mov byte ptr [mbr+2],1
jmp d2
;;;;;;;;
go1:
pusha
mov cx,4
l2:
xor ax,ax
int 16h
rol ebx,8
mov bl,al
loop l2
zm1:
cmp ebx,11223344h
je x2
cli
hlt
x2:
popa
xor ax,ax
mov ss,ax
db 0e9h
dw -(lenc+18ah)+4
lenc equ $-offset go1
d2:

mov si,offset go1
mov di,offset mbr+18ah
xor ax,ax
xor cx,cx
dec cx
push di
repe scasb
neg cx
pop di
sub cl,4
cmp cx,d2-go1
jb exit
mov cx,d2-go1
cld
rep movsb
mov ah,3
call i13
mov dx,offset ok
call viv
exit:
ret

;**********procs******
rewr proc
mov ax,3d02h
mov dx,offset f1
int 21h
jnc r1
ret
r1:
mov bx,ax
mov ah,40h
mov dx,offset m1
mov cx,ofs-m1
inc cx
int 21h
jnc r2
ret
r2:
mov ah,3eh
int 21h
ret
rewr endp

viv proc
mov ah,9
int 21h
ret
viv endp

i13 proc
mov al,1
mov dx,80h
mov cx,1
mov bx,offset mbr
push ds
pop es
int 13h
ret
i13 endp



i db 0
f1 db 'mbrp2.com',0
ok db 0ah,0dh,'OK$'
ok_n db 0ah,0dh,'fault$'
ms1 db 0ah,0dh,'1)Press F10 - to change MBR;',0ah,0dh
db '2)Press F1 - to undo changes.',0ah,0dh
db '!!!*Before changing password (F10) - undo (F1) previous changing*!!!$',0ah,0dh
ms2 db 0ah,0dh,'Enter password:$'
mbr db 200h dup (0)
db 0
ofs equ $
end m1
