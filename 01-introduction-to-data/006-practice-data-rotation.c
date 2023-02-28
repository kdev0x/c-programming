int main(){
    unsigned int value = 0xC9558EDB; /* 0x9EDBC955 */
    unsigned short v1 = 0x00;
    unsigned short v2 = 0x00;
    v1 = value | v1;
    v2 = value >> 16;
    value = v1;
    value = value << 16;
    value = value | v2;
    return 0;
}
