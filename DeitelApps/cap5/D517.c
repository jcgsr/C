/* Exercise 5.17 Solution jó 26.01.2018*/
#include <stdio.h>

int multiple( int, int );

int main()
{ 
   int x, y, i;

   for ( i = 1; i <= 3; i++ )
   { 
      printf( "Enter two integers: " );
      scanf( "%d%d", &x, &y );
   
      if ( multiple( x, y ) )
         printf( "%d is a multiple of %d\n\n", y, x );
      else
         printf( "%d is not a multiple of %d\n\n", y, x );
   }

   return 0;
}

int multiple( int a, int b )
{ 
   return !( b % a );
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
