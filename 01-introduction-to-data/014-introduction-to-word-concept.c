/*
      1. data (value)
      2. word (container)
      3. word size (container size)
      4. word name (container name)
      5. word type (container type)
*/


/*
    value : RF2G
    type : unsigned int
    size : 4-byte
    name : value

    value : YmTq
    type : unsigned int
    size : 4-byte
    name : val
*/
#include <stdio.h>

int main(){
    unsigned int value = 0x52573247;
    unsigned int val = 0x556D54E1; //0x596D5471
    printf("%x %x %x %x\n", 'R', 'F', '2', 'G');
    printf("%x %x %x %x\n", 'Y', 'm', 'T','q');
    return 0;
}
