/* Exercise 5.16 Solution jó 26.01.2018*/
#include <stdio.h>

int integerPower( int, int );

int main()
{ 
   int exp, base;

   printf( "Enter integer base and exponent: " );
   scanf( "%d%d", &base, &exp );
   printf( "%d to the power %d is: %d\n",
          base, exp, integerPower( base, exp ) );

   return 0;
}

int integerPower( int b, int e )
{ 
   int product = 1, i;

   for ( i = 1; i <= e; i++ )
      product *= b;
   
   return product;
} 

