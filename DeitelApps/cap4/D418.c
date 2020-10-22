/* Exercise 4.18 Solution 
 *jó 23.01.2018
 */
#include <stdio.h>

int main( void )
{ 
   int i, j, number;

   printf( "Enter 5 numbers between 1 and 30: " );

   for ( i = 1; i <= 5; i++ ) { 
      scanf( "%d", &number );

      for ( j = 1; j <= number; j++ ) 
         printf( "*" );

      printf( "\n" );
   }

   return 0;
}

