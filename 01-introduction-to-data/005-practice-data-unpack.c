int main(){
    /* unpack data */
    unsigned int value = 0xC9558EDB;
    
    unsigned short v1 = 0x0000;
    unsigned short v2 = 0x0000;

    unsigned char c1 = 0x00;
    unsigned char c2 = 0x00;
    unsigned char c3 = 0x00;
    unsigned char c4 = 0x00;

    v1 = value;
    v2 = value >> 16;
  
    c1 = value;
    c2 = value >> 8;
    c3 = value >> 16;
    c4 = value >> 24;

    return 0;
}
