#include <stdio.h>
#include <stdint.h>

/*
Q21
What would it be the output of the following program
*/

void main()
{
   struct a {
        unsigned int category :5;
        unsigned int scheme :4;
    };
    printf ("size = %d\n", sizeof(struct a));

}