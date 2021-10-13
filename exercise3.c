#include <stdio.h>
#include <stdint.h>

int main(void) {
  uint16_t result, x = 3;

  printf("Exercise 3\n");

  // (a) result = REM(5, 2)
  printf("\n(a)\n");
  result = 5 % 2;
  printf("result: %x\n", result);

  // (b) result = REM(5+2, x)
  printf("\n(b)\n");
  result = (5+2) % x;
  printf("result: %x\n", result);

  // (c) result =  REM(5,x-2)
  printf("\n(c)\n");
  result = 5 % x-2;
  printf("result: %x\n", result);

  return 0;
}