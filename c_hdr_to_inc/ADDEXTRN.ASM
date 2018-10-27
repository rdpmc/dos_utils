.model tiny
.486
of equ offset
.code
org 100h
m1:
mov ah,9
mov dx,of buf
int 21h
xor ax,ax
int 16h
mov ax,3d02h
mov dx,offset f1
int 21h
jnc j1
ret
j1:
mov bx,ax
mov ah,3fh
mov cx,len1
neg cx
int 21h
push ax
cld 
mov cx,ax
mov di,dx
push di
mov si,len1
neg si
l1:
mov eax,'llac'
scasd
jz j2
bk1:
sub di,3
bk1a:
loop l1
pop di
mov eax,'tad.'
bk3:
scasd
jz j4
sub di,3
jmp bk3
j4:
push dx
xor cx,cx
xor dx,dx
mov ax,4200h
int 21h
pop dx
lea ecx,[edi-4]
sub cx,dx
mov ah,40h
int 21h
mov word ptr [f1],ax
lea ebp,[edx+eax]
mov ax,len1
neg ax
inc ax
mov cx,si
sub cx,ax
mov dx,si
inc cx
sub dx,cx
mov ah,40h
int 21h
mov dx,bp
pop cx
sub cx,word ptr [f1]
mov ah,40h
int 21h
mov ah,3eh
int 21h
ret
j2:
push cx
mov al,' '
repe scasb
pop cx
dec di
cmp byte ptr [di],5ah
ja bk1
cmp byte ptr [di],41h
jb bk1
pusha
call len
call have
popa
jc bk1
xchg si,di
mov eax,'rtxe'
stosd
mov ax,' n'
stosw
bk2:
lodsb
cmp al,40h
jb j3
stosb
jmp bk2
j3:
mov al,':'
stosb
mov eax,'corp'
stosd
mov ax,0a0dh
stosw
dec si
xchg si,di
jmp bk1a
;;;;;;;;;;
len proc
co1:
mov al,0dh
xor cx,cx
dec cx
push di
repne scasb
not cx
dec cx
co2:
jmp short lenj1
bkl2:
cld
pop di
ret
lenj1:
mov al,' '
xor bx,bx
std
dec di
dec di
bkl1:
scasb
jnz lenj2
inc bx
jmp bkl1
lenj2:
sub cx,bx
jmp bkl2
len endp
;;;;;;;;;;;
have proc
push di
mov di,of f1
mov bp,cx
mov cx,di
neg cx
sub cx,8
hal1:
mov eax,'rtxe'
scasd
jz ha1
bkh1:
sub di,3
loop hal1
hex1:
pop di
clc
ret
ha1:
scasw
push cx
mov byte ptr [co1+1],':'
push word ptr [co2]
mov word ptr [co2],9090h
call len
pop word ptr [co2]
mov byte ptr [co1+1],0dh
cmp cx,bp
je ha2
bkh2:
dec di
dec di
pop cx
jmp bkh1
ha2:
pop ax
pop si
push si
push ax
repz cmpsb
jcxz ha3
sub cx,bp
add di,cx
jmp bkh2
ha3:
pop cx
stc
pop di
ret
have endp
f1 db '1.asm',0
len1 equ $-offset m1+2000
buf db '>need 1.asm$'
end m1