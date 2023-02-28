int main(){
    /* pack data */
    unsigned char v1 = 0x2B;
    unsigned char v2 = 0x44;
    unsigned short v3 = 0x0000;

    unsigned short v4 = 0x2E66;
    unsigned short v5 = 0x77BB;
    unsigned int v6 = 0x00000000;

    unsigned char c1 = 0xE3;
    unsigned char c2 = 0x25;
    unsigned char c3 = 0x99;
    unsigned char c4 = 0xDB;

    unsigned int v7 = 0x00;
    
    v7 = v7 | c4;
    v7 = v7 << 8;
    v7 = v7 | c3;
    v7 = v7 << 8;
    v7 = v7 | c2;
    v7 = v7 << 8;
    v7 = v7 | c1;
    

    v3 = v3 | v2;
    v3 = v3 << 8;
    v3 = v3 | v1;
    
    v6 = v6 | v5;
    v6 = v6 << 16;
    v6 = v6 | v4;

    return 0;
}
