#include <stdio.h>
#include <math.h>

int prime( int n );

int main()
{ 
   int number, j, count = 0;

   printf( "The prime numbers from 1 to 10000 are:\n" );

   for ( j = 1; j <= 10000; j++ )
      if ( prime( j ) )
      { 
         ++count;
         printf( "%5d", j );
      
         if ( count % 10 == 0 )
            printf( "\n" );
      }

   return 0;
}

int prime( int n )
{ 
   int i;

   for ( i = 2; i <= ( int ) sqrt( n ); i++ )
      if ( n % i == 0 )
         return 0;

   return 1;
}



 /*************************************************************************
 * (C) Copyright 2000 by Deitel & Associates, Inc. and Prentice Hall.     *
 * All Rights Reserved.                                                   *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
