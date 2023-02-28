int main(){
    /* (~(((0x2B << 1) & 0xE6) ^ 0x91)) | 0x88 */
    unsigned char value = 0x2b << 1;
    value = value & 0xe6;
    value = value ^ 0x91;
    value = (~value);
    value = value | 0x88;

    return 0;
}
