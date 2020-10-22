/*
 * jó 12.01.18
 */

#include<stdio.h>

int main()
{
    int number, numCopy, factor = 10000, digit, eights = 0;;

   printf( "Enter a 5-digit number: " );
   scanf( "%d", &number );

   numCopy = number;

   while ( factor >= 1 )
   {
      digit = numCopy / factor;
      if ( digit == 8 )
         ++eights;
      numCopy %= factor;
      factor /= 10;
   }

   printf( "The number %ld has %d eight(s) in it.\n", number, eights );

   return 0;
}
