#include <stdio.h>
#include <stdint.h>

const uint8_t BytesArray[48] = {0x20, 0x19, 0xFA, 0x22, 0x10, 0x02, 0x00, 0x00, \
                                0x28, 0x14, 0x24, 0x02, 0x01, 0xB4, 0x08, 0xAA, \
                                0x21, 0x17, 0x23, 0xBF, 0x16, 0x05, 0x15, 0x04, \
                                0x27, 0xAB, 0xFF, 0xA2, 0x00, 0x09, 0xBB, 0x11, \
                                0x22, 0x18, 0xF0, 0x24, 0xB2, 0x25, 0x26, 0xD4, \
                                0x29, 0x03, 0x13, 0x90, 0xE0, 0xCC, 0x12, 0x10  \
                                };

void printMemContent(void){
    int i;

    // %02x: 0 -> fill with 0's, 2 -> width, x -> lower case hex
    printf("\n%x :: ", &BytesArray[0]);
    for(i=15;i>=0;i--) {
        printf("%02x ", BytesArray[i]);
    }
    printf("\n%x :: ", &BytesArray[16]);
    for(i=31;i>=16;i--) {
        printf("%02x ", BytesArray[i]);
    }
    printf("\n%x :: ", &BytesArray[32]);
    for(i=47;i>=32;i--) {
        printf("%02x ", BytesArray[i]);
    }
}

typedef struct {
        uint8_t n1;
        uint32_t n2;
        uint16_t n3;
        uint32_t n4;
    } NTYPE;

/*
(Q5) Using diagrams or your own words, explain/justify the values printed after declaring the following pointer to the structure */
int main() {
    printMemContent();
    NTYPE* p;
    p = (NTYPE*) &(BytesArray[0]);

    printf("\nThe value of n1 is %02x", p->n1);
    printf("\nThe value of n2 is %08x", p->n2);
    printf("\nThe value of n3 is %04x", p->n3);
    printf("\nThe value of n4 is %08x", p->n4);

    return 0;
}