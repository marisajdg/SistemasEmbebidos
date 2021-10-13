#include <stdio.h>
#include <stdint.h>

int main(void) {
  uint32_t z = 0xAABBCCDD;
  uint16_t mask = 0xFF00;
  uint8_t pos = 8;


  printf("Exercise 1\n");
  printf("Prev z: %x\n", z);

  z = (z & mask) >> pos;

  printf("Curr z: %x\n", z);

  return 0;
}

