#include <stdio.h>

int main(){

    signed char v1 = 0x35; //53 
    signed char v2 = 0x9f; // - 97 
    signed char v3 = 0x34; //52
    
    unsigned char v4 = 0x59;// 89
    unsigned char v5 = 0x6f;//111
    unsigned char v6 = 0xf2;//242

    // v4 = v4 << 2; // 0110 0100 0x64 100
    // v5 = v5 >> 3; // 0000 1101 0x0D 13
    // v6 = v6 << 5; // 0100 0000 0x40  64

    // v1 = v1 << 2; //1101 0100 0xd4  -42
    // v2 = v2 >> 3; //1111 0011 0xf3 -13
    // v3 = v3 >> 4; //0000 0011 0x03 +3 

    v4 = v4 << 3; //1100 1000 0xc8 200
    v6 = v6 >> 3; // 0001 1110 0x1e 30

    v1 = v1 >> 1; // 0001 1010 0x1a +26
    v2 = v2 << 3; // 1111 1000 0xf8 -8

    printf("v1:%d\n", v1);
    printf("v2:%d\n", v2);
    printf("v3:%d\n", v3);
    printf("v4:%d\n", v4);
    printf("v5:%d\n", v5);
    printf("v6:%d\n", v6);
    

    return 0;
}
