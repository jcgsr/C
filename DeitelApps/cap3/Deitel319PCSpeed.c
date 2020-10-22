/*
 * jó 11.01.18
 */
/* Exercise 3.37 Solution */
#include<stdio.h>

int main()
{
   long int count = 1;

   while( count <= 3000000 )
   {
      if ( count % 1000000 == 0 )
         printf( "Multiple is %d\n", count / 1000000 );
      ++count;
   }

   return 0;
}
