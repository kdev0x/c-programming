#include <stdio.h>

int main(){
    unsigned char ch_ascii = 'Q'; // 81
    unsigned char ch_binary = 0b01010001; //0x3C3D4E
    unsigned char ch_octal = 0121;
    unsigned char ch_decimal = 81;
    unsigned char ch_hexadecimal = 0x51;
    printf("%d %d %d %d %d\n", ch_binary, ch_octal, ch_decimal, ch_hexadecimal, ch_ascii);
    return 0;
}
