#include <stdio.h>
#include <stdint.h>

const uint8_t BytesArray[48] = {0x20, 0x19, 0xFA, 0x22, 0x10, 0x02, 0x00, 0x00, \
                                0x28, 0x14, 0x24, 0x02, 0x01, 0xB4, 0x08, 0xAA, \
                                0x21, 0x17, 0x23, 0xBF, 0x16, 0x05, 0x15, 0x04, \
                                0x27, 0xAB, 0xFF, 0xA2, 0x00, 0x09, 0xBB, 0x11, \
                                0x22, 0x18, 0xF0, 0x24, 0xB2, 0x25, 0x26, 0xD4, \
                                0x29, 0x03, 0x13, 0x90, 0xE0, 0xCC, 0x12, 0x10  \
                                };

/* 
(Q4) Explain with a diagram o your own words the output printed by the following lines of code */
int main() {
    typedef struct {
        uint8_t n1;
        uint32_t n2;
        uint16_t n3;
        uint32_t n4;
    } NTYPE;

    NTYPE a;
    
    printf("\nThe size of NTYPE is %d", sizeof(NTYPE));
    printf("\nThe size of a is %d", sizeof(a));

    return 0;
}