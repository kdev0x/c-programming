#include <stdio.h>

int main(){
    unsigned short val = 0x8CDB;

    unsigned char n1 = 0x00;
    unsigned char n2 = 0x00;
    unsigned char n3 = 0x00;
    unsigned char n4 = 0x00;

    unsigned char n5 = 0x00;
    unsigned char n6 = 0x00;
    unsigned char n7 = 0x00;
    unsigned char n8 = 0x00;

    n1 = n1 | val;
    n1 = n1 & 0x0f;

    n2 = n2 | val;
    n2 = n2 & 0xf0;
    n2 = n2 >> 4;

    n3 = n3 | (val >> 8);
    n3 = n3 & 0x0f;  
    

    n4 = n4 | (val >> 8);
    n4 = n4 >> 4;

    printf("%x %x %x %x\n", n1 , n2 , n3 , n4); 

    n5 = n5 | (val >> 12);

    n6 = n6 | (val >> 8);
    n6 = n6 & 0x0f;

    n7 = n7 | val;
    n7 = n7 >> 4;
    
    n8 = n8 | val;
    n8 = n8 & 0x0f;

    printf("%x %x %x %x\n", n5 , n6 , n7 , n8);

    return 0;
}
