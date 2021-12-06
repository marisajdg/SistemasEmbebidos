#include <stdio.h>
#include <stdint.h>

/*
Q15
Write a program that prints the binary representation of the x number using a bit field structure

int16_t x = 0xBBDD;
*/
typedef struct{
  uint8_t b0:1;
  uint8_t b1:1;
  uint8_t b2:1;
  uint8_t b3:1;
  uint8_t b4:1;
  uint8_t b5:1;
  uint8_t b6:1;
  uint8_t b7:1;
  uint8_t b8:1;
  uint8_t b9:1;
  uint8_t b10:1;
  uint8_t b11:1;
  uint8_t b12:1;
  uint8_t b13:1;
  uint8_t b14:1;
  uint8_t b15:1;
}BITS;


void main() {
    int16_t x =  0xBBDD;

    BITS* y = &x;

    printf("%x", y -> b0);
    printf("%x", y -> b1);
    printf("%x", y -> b2);
    printf("%x", y -> b3);
    printf("%x", y -> b4);
    printf("%x", y -> b5);
    printf("%x", y -> b6);
    printf("%x", y -> b6);
    printf("%x", y -> b7);
    printf("%x", y -> b8);
    printf("%x", y -> b9);
    printf("%x", y -> b10);
    printf("%x", y -> b11);
    printf("%x", y -> b12);
    printf("%x", y -> b13);
    printf("%x", y -> b14);
    printf("%x", y -> b15);
    printf("\n");
}





#include<stdio.h>
#include<stdint.h>

void main(){
  typedef struct{
    uint8_t b0:1;
    uint8_t b1:1;
    uint8_t b2:1;
    uint8_t b3:1;
    uint8_t b4:1;
    uint8_t b5:1;
    uint8_t b6:1;
    uint8_t b7:1;
    uint8_t b8:1;
    uint8_t b9:1;
    uint8_t b10:1;
    uint8_t b11:1;
    uint8_t b12:1;
    uint8_t b13:1;
    uint8_t b14:1;
    uint8_t b15:1;
    uint8_t b16:1;
    uint8_t b17:1;
    uint8_t b18:1;
    uint8_t b19:1;
    uint8_t b20:1;
    uint8_t b21:1;
    uint8_t b22:1;
    uint8_t b23:1;
    uint8_t b24:1;
    uint8_t b25:1;
    uint8_t b26:1;
    uint8_t b27:1;
    uint8_t b28:1;
    uint8_t b29:1;
    uint8_t b30:1;
    uint8_t b31:1;
  }BITS;
  /*typedef struct{
    uint32_t bits;
  }PA;*/
  uint32_t PA1, PA3;
  uint32_t value = 0x065B4766;
  uint32_t zero = 0x00;

  PA1 = (PA1 & zero) | value;

  BITS* PA2 = &value;

  PA3 = zero

  printf("1: %x\n", PA1);
  printf("2: %x\n", *PA2);
}



#include<stdio.h>
#include<stdint.h>

void main(){
    uint32_t num = 0x000000B3;
    printf("unsiged: %d\n", num); // Print out unsigned representation
    printf("signed: %u\n", (uint8_t)num); // Print out signed representation
}