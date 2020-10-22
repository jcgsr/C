/* Exercise 5.31 Solution jó 26.01.2018*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip();

int main()
{ 
   int loop, headCount = 0, tailCount = 0;
   
   srand( time( NULL ) );
   
   for ( loop = 1; loop <= 100; loop++ )
   { 

      if ( flip() == 0 )
      { 
         tailCount++;
      }
      else
      { 
         headCount++;
      }

      if ( loop % 10 == 0 )
         printf( "\n" );
   }

   printf( "\nThe total number of Heads was %d\n", headCount );
   printf( "The total number of Tails was %d\n", tailCount );

   return 0;
}

int flip()
{
   int HorT = rand() %2;

   if ( HorT == 0 )
      printf( "Tails " );
   else
      printf( "Heads " );
   return HorT;
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
