#include <stdio.h>

int main(){

    unsigned char byte = 0x3E;// L 
    signed char value = 0xE3; // A
    
    byte = byte << 2;// 
    byte = byte >> 2;

    value = value << 2; // 1000 1100 0x8c
    printf("%d %x\n", value,value);
    value = value >> 2;//1110 0011 0xe3 -29 
    printf("%d %x\n", value , value);

    value = value >> 1; //1111 0001 decimel = -15 hexadecimel = 0xf1
    printf("%d %x\n", value , value); 
    value = value >> 2; //1111 1100 decimel = -4 hexadecimel = 0xfc  
    printf("%d %x\n", value , value);
    value = value >> 1; // 1111 1110 decimel = -2 hexadecimel = 0xfe
    printf("%d %x\n", value , value);

    return 0;
}
