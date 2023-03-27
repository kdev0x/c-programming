#include <stdio.h>

int main(){ 
    unsigned int value = 0x3E4DE08F; // multibyte
    
    unsigned int little_endian = 0x00;
    unsigned int big_endian = 0x00;

    big_endian |= value;
    little_endian = (value << 24);
    little_endian = little_endian | (((value << 16)>>24) << 16);
    little_endian = little_endian | (((value >> 16)<< 24)>> 16);
    little_endian = little_endian | (value >> 24);
    
    printf("%x %x\n", big_endian, little_endian);
    
    

    
    /* little-endian: 
       0: 8F 
       1: E0
       2: 4D
       3: 3E
     */

    /* big-endian: 
       0: 3E
       1: 4D
       2: E0
       3: 8F
     */
}
