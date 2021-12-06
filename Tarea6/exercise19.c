#include <stdio.h>
#include <stdint.h>

/*
Q19
In the following program, how would you print 50 using p?
*/

void main()
{
   int a[]= {10,20,30,40,50};
   char *p;
   p = (char *)a;

   printf("%d\n", *(p+16));

}
