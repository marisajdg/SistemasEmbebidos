#include <stdio.h>
#include <stdint.h>

/*
Q10
Given the following variable:
uint32_t z = 0xAABBCCDD;

Extract the 0xBB value using: 


a. Variable access with pointers, casts and subscripting
b. Variable access with pointers, casts and dereferencing using * 
*/

void main() {
  uint32_t z = 0xAABBCCDD;
  uint8_t pos = 2;

  uint8_t value = ((char*)&z)[pos];
  printf("\nUsing pointers, casts and subscripting: %x", value);

  value = *(((char*)&z)+pos);
  printf("\nUsing pointers, casts and dereferencing using *: %x", value);
}