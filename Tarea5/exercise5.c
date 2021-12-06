#include <stdio.h>
#include <stdint.h>

int main(void) {
  uint32_t n=2, x=0xFA0;

  printf("Exercise 5\n");

  // a) Set bits n+1 and n+4 of x to 1
  printf("\n(a)\n");
  printf("Prev x: %x\n", x);
  x |= 1 << n+1 | 1 << n+4; 
  printf("Curr x: %x\n", x);

  // b) Clear bit n-1 and n+1 of x to 0
  printf("\n(b)\n");
  printf("Prev x: %x\n", x);
  x &= ~(1 << n-1) & ~(1 << n+1);
  printf("Curr x: %x\n", x);

  // c) Invert bit n, n+3 and n+4 of x
  printf("\n(c)\n");
  printf("Prev x: %x\n", x);
  x ^= 1 << n ^ 1 << n+3 ^ 1 << n+4;
  printf("Curr x: %x\n", x);

  return 0;
}



