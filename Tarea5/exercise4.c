#include <stdio.h>
#include <stdint.h>

const char *bit_rep[16] = {
    [ 0] = "0000", [ 1] = "0001", [ 2] = "0010", [ 3] = "0011",
    [ 4] = "0100", [ 5] = "0101", [ 6] = "0110", [ 7] = "0111",
    [ 8] = "1000", [ 9] = "1001", [10] = "1010", [11] = "1011",
    [12] = "1100", [13] = "1101", [14] = "1110", [15] = "1111",
};

void print_byte(uint8_t byte)
{
    printf("%s%s", bit_rep[byte >> 4], bit_rep[byte & 0x0F]);
}

int main(void) {
  uint16_t x;

  printf("Exercise 4\n");

  // (a) if x=11100101      x = x | (1 << 4)
  x = 0xE5;
  printf("\n(a)\n");
  printf("Prev x: 11100101\n");
  x = x | (1 << 4);
  printf("Curr x: ");
  print_byte(x);
  printf("\n");


  // (b) if x=10101010     x = (x >> 4) & 0x0F
  printf("\n(b)\n");
  x = 0xAA;
  printf("Prev x: 10101010\n");
  x = (x >> 4) & 0x0F;
  printf("Curr x: ");
  print_byte(x);
  printf("\n");

  // (c) if x=00000000     x = x || 0x30
  printf("\n(c)\n");
  x = 0x0;
  printf("Prev x: 00000000\n");
  x = x || 0x30;
  printf("Curr x: ");
  print_byte(x);
  printf("\n");

  // (d) if x=11111111      x = x && 0x00
  printf("\n(d)\n");
  x = 0xFF;
  printf("Prev x: 11111111\n");
  x = x && 0x00;
  printf("Curr x: ");
  print_byte(x);
  printf("\n");

  return 0;
}



