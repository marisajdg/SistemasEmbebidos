#include <stdio.h>
#include <stdint.h>

const uint8_t BytesArray[48] = {0x20, 0x19, 0xFA, 0x22, 0x10, 0x02, 0x00, 0x00, \
                                0x28, 0x14, 0x24, 0x02, 0x01, 0xB4, 0x08, 0xAA, \
                                0x21, 0x17, 0x23, 0xBF, 0x16, 0x05, 0x15, 0x04, \
                                0x27, 0xAB, 0xFF, 0xA2, 0x00, 0x09, 0xBB, 0x11, \
                                0x22, 0x18, 0xF0, 0x24, 0xB2, 0x25, 0x26, 0xD4, \
                                0x29, 0x03, 0x13, 0x90, 0xE0, 0xCC, 0x12, 0x10  \
                                };

/* Add the 6 lines to print 6 integer types: char, short, etc.
(Q1) Also write code to print the size of six fixed-size integers/float types: int8_t,  
uint8_t , etc. */
int main() {
    int i;
    printf("\n\r Size of char is %d", sizeof(char));
    printf("\n\r Size of int is %d", sizeof(int));
    printf("\n\r Size of long is %d", sizeof(long));
    printf("\n\r Size of float is %d", sizeof(float));
    printf("\n\r Size of long long is %d", sizeof(long long));
    printf("\n\r Size of short is %d", sizeof(short));

    printf("\n\r Size of int8_t is %d", sizeof(int8_t));
    printf("\n\r Size of uint8_t is %d", sizeof(uint8_t));
    printf("\n\r Size of int16_t is %d", sizeof(int16_t));
    printf("\n\r Size of uint16_t is %d", sizeof(uint16_t));
    printf("\n\r Size of int32_t is %d", sizeof(int32_t));
    printf("\n\r Size of uint32_t is %d", sizeof(uint32_t));

    return 0;
}