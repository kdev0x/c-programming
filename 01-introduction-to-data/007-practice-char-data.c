#include <stdio.h>

int main(){
    unsigned char v1 = 65; //01000001
    unsigned char v2 = 'A';

    //unsigned char v3 = 0b00000110;
    //v2 = v2 | v3;

    //v2 = v2 ^ v2;
    //v2 = v2 | 0b01000111;
    unsigned char v3 = 0b00000001;
    v2 = v2 | v3;
    v3 = v3 << 1;
    v2 = v2 | v3;
    v3 = v3 << 1 ;
    v2 = v2 | v3;

    printf("%c\n", v2);

    return 0;
}
