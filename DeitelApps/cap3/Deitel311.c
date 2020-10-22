/* Exercise 3.24 Solution
 * jó 07.01.2018
 */
#include <stdio.h>
#include<locale.h>

int main()
{
   int counter, number, largest;

   printf( "Digite o primeiro número: " );
   scanf( "%d", &largest );
   counter = 2;

   while ( counter <= 10 )
   {
      printf( "Digite o próximo número: " );
      scanf( "%d", &number );

      if ( number > largest )
         largest = number;

      counter++;
   }

   printf( "O maior número é %d\n", largest );

   return 0;
}
