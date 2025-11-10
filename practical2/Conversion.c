#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {

   // Declare variables, done before we properly start solving the problem; the integer we want to convert into a float, then changes it into binary, counts how many bits are needed to represent it, and finally it prints all the results. 
   int i, inum, tmp, numdigits;
   float fnum;
   char binnum[60];

   // Intialise 4-byte integer, any value
   inum = 33554431;   // This is 2^25 - 1

   // Convert to 4-byte float, just using float()
   fnum = (float) inum;

   // Convert to binary number (string)
   i = 0;
   tmp = inum;
   while (tmp > 0) {
      // Write the remainder when dividing by 2 (0 or 1)
      sprintf(&binnum[i], "%1d", tmp % 2);
      tmp = tmp / 2;   // Go to the next bit and so on so forth
      i++;
   }

   // Terminate the string 
   binnum[i] = '\0';

   // Reverse the String binnum
   int length, mid, j;
   char aux;
   length = strlen(binnum);
   mid = length / 2;
   for (i = 0; i < mid; i++) {
       j = length - i - 1;
       aux = binnum[i];
       binnum[i] = binnum[j];
       binnum[j] = aux;
   }

   /* TODO: Complete the expression */
   // To solve this, we have to take an example: 7 (111) needs 3 bits, this is obtained by log2(7+1) = 3
   numdigits = (int) ceil(log2(inum + 1));

   // Show the results
   printf("The number of digits is %d\n", numdigits);
   printf("inum=%d,  fnum=%f, inum in binary=%s\n", inum, fnum, binnum);

   return 0;
}

