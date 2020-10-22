/*
 * Exercise 4.14 Solution 
 * jó 23.01.18
 */

#include<stdio.h>

int main()
{
	 int i, j, factorial;

   printf( "Nº\tFatorial\n" );

   for ( i = 1; i <= 5; i++ )
   { 
      factorial = 1;

      for ( j = 1; j <= i; j++ )
         factorial *= j;
      
      printf( "%d\t%d\n", i, factorial );
   }

   return 0;
}

