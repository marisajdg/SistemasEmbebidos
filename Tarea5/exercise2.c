#include <stdio.h>
#include <stdint.h>

int main(void) {
  uint16_t x = 0xFFFF;
  uint16_t mask = 0x400; // 10000000000

  printf("Exercise 2\n");

  if (x & mask){
    printf("true\n");
  }
  else{
    printf("false\n");
  }

  return 0;
}