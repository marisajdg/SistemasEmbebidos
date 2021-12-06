#include <stdio.h>
#include <stdint.h>

uint8_t BytesArray[48] = {0x20, 0x19, 0xFA, 0x22, 0x10, 0x02, 0x00, 0x00, \
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

/*
(Q7)
xxx000 :: aa 08 b4 01 02 24 14 28 00 00 02 10 22 fa 19 20
xxx010 :: 11 bb 09 00 a2 ff ab 27 04 15 05 16 bf 23 17 21
xxx020 :: 10 12 cc e0 90 13 03 29 d4 26 25 b2 24 f0 18 22

   Move the value 0xaa from location xxx00F to xxx01F other values
   should be unchanged, use pointers and show the memory content after
   executing your code*/
int main() {

    printf("Before:\n");
    printMemContent();

    uint8_t* x =(uint8_t*) &BytesArray[0];
    *(x + 31) = *(x + 15); 

    printf("\n\nAfter:\n");
    printMemContent();

    return 0;
}

