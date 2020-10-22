/* Exercise 5.25 Solution jó 26.01.2018*/
#include <stdio.h>

double smallest3( double, double, double );

int main()
{ 
   double x, y, z;

   printf( "Enter three doubleing point values: " );
   scanf( "%lf%lf%lf", &x, &y, &z );
   printf( "The smallest value is %f\n", smallest3( x, y, z ) );

   return 0;
}

double smallest3( double a, double b, double c )
{ 
   double smallest = a;

   if ( b < smallest )
      smallest = b;
   
   if ( c < smallest )
      smallest = c;
      
   return smallest;
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
