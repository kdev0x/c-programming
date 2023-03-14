#include <stdio.h>

int main(){
   
    /* %d %x %X */
    printf("%d in hex is %x and %X\n", 128, 128, 128);
    printf("%x in decimal is %d\n", 0x3b, 0x3b);

    printf("%d in hex is %x\n", 217, 217); // 1101 1001
    printf("%c in decimal is %d, and in hex is %x\n", 78, 78, 78); //0100 1110 //4e

    /* practice %d -> %x -> %c */
    printf("%d in Hexadecimel is equal to %x and in ascii is %c\n", 112,112,112);//0111 0000 70 p

    /* practice %x -> %d -> %c */

    printf("%x in decimal is equal to %d and in ascii is %c\n", 72,72,72); //0100 1000 48  //H

    return 0;
}
