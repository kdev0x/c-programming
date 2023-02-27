; C
;unsigned char v1 = 0x0d;
;unsigned char v2= 0x0f;
;unsigned short v3 = 0x0b98;
;unsigned int v4 = 0x9f87fb07;

; ASM
;Code Sections
jmp main
;DATA SECTION
 
v1: db 0x0d
v2: db 0x0f
v3: db 0x0b
    db 0x98
v4: db 0x9
    db 0x87 
    db 0xfb
    db 0x07
main:

hlt

; Machine Code
;00:1F 
;01:0A

;DATA SECTION
;v1->02:0x0d
;v2->03:0x0f
;v3->04:0x0b
;    05:98
;v4->06:0x9f
;    07:0x87
;    08:0xfb
;    09:0x07

;Code Sections
; main-> 0A:0x00
