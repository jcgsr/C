/* Exercise 5.15 Solution 
 * jó 26.01.2018
 */
#include <stdio.h>
#include <math.h>

double hypotenuse( double, double );

int main()
{ 
   int i;
   double side1, side2;
   
   for ( i = 1; i <= 3; i++ )
   { 
      printf( "Enter the sides of the triangle: " );
      scanf( "%lf%lf", &side1, &side2 );
      printf( "Hypotenuse:  %.1f\n\n", hypotenuse( side1, side2 ) );
   }

   return 0;
}

double hypotenuse( double s1, double s2 )
{ 
   return sqrt( pow( s1, 2 ) + pow( s2, 2 ) );
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
