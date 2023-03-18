#include <stdio.h>

int main(){

    signed char v1 = 0xE7; // decimal = 1110 0111 -25 
    unsigned char v2 = 0xE7; // decimal = 1110 0111 231

    signed short v3 = 0xF192;
    unsigned short v4 = 0xF192;

    signed int v5 = 0xDE16774A;
    unsigned int v6 = 0xDE16774A;


    
    v1 = v1 >> 4; //1111 1110 0xfe -2 
    v2 = v2 >> 4; //0000 1110 0x0e 14
    
    v3 = v3 >> 9; //1111 1111 1111 1000 0xfff8 -8
    v4 = v4 >> 8; //0000 0000 1111 0001 0x00f1 241   
    
    v5 = v5 >> 17; //  1111 1111 1111 1111 1110 1111 0000 1011 0xffffef0b
    v6 = v6 >> 12; //  0000 0000 0000 1101 1110 0001 0110 0111 0x000de167 

    printf("v1:%d, v2:%d\n", v1, v2);
    printf("v3:%d, v4:%d\n", v3, v4);
    printf("v5:%d, v6:%d\n", v5, v6);

    return 0;
}
