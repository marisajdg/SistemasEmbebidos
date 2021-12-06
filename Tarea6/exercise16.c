/*
Q16
Rewrite the following program using dynamic memory allocation for variable j and for array “carray”. The other variables and arrays must remain unchanged.
*/

const int32_t array_const[10] = {9,8,7,6,5,4,3,2,1,0};

int main() { 
   int32_t aarray_data[10][10]; 
   int32_t barray_data[10]; 
   int32_t carray_data[10] = {3,6,9,12,15,18,21,24,27,30}; 
   int32_t i; 
   int32_t j=0; 
   for ( i= 0 ; i<=9 ; i++)
     {
        barray_data[i] = array_const[i] + 4; 
        while (j <= 9) 
          {
            aarray_data[j][i] = barray_data[i] * carray_data[i]; 
            j = j + 1; 
          }
     }
    return 0;
}
