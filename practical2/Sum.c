#include <stdio.h>


int main(void) {
/* Declare variables again before trying anything */
   int i;
   float sum1, sum2, diff;
   

/* First sum, adding numbers from 1 to 1000 */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
      sum1 += 1.0 / (i*i); 
   }


/* Second sum, add numbers  from 1000 down to 1 */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
      sum2 += 1.0 / (i*i); /* Insert the same line as above except use sum2 */
   }
   // Show the results 
   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference between the two sums, they should be almost the same, but they can vary slighlty*/
   diff = sum1 - sum2;/* ?? */

   printf(" Difference between the two is %f\n",diff);

}
