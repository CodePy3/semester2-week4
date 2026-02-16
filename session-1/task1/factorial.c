
/*
 * Factorial
 */

 #include <stdio.h>
 
int finalNum = 1;

int main( void ) {
   long int f[20];
   f[0] = 1;
   /*
   Code to compute the factorial of each array index
   Print your final answer
   */
   for(int k=1; k<20; k++) {
      f[k] = k*f[k-1];
   }

   for (int k=0; k<20; k++) {
      printf("%li\n", f[k]);
   }

   

    return 0; 
}
