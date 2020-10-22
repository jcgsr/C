/* Exercise 5.11 Solution 
 * jó 26.01.2018
 */
 
 
#include <stdio.h>
#include <math.h>

double roundToInteger( double );
double roundToTenths( double );
double roundToHundreths( double );
double roundToThousandths( double );

int main()
{    
   int i, count;
   double number;

   printf( "How many numbers do you want to process? " );
   scanf( "%d", &count );

   for ( i = 0; i < count; i++ )
   { 
      printf( "Enter number: " );
      scanf( "%lf", &number );
      printf( "%f rounded to an integer is %f\n", 
            number, roundToInteger( number ) );
      printf( "%f rounded to the nearest tenth is %f\n",
            number, roundToTenths( number ) );
      printf( "%f rounded to the nearest hundredth is %f\n", 
            number, roundToHundreths( number ) );
      printf( "%f rounded to the nearest thousandth is %f\n\n", 
            number, roundToThousandths( number ) );
   }

   return 0;
}

double roundToInteger( double n )
{ 
   return floor( n + .5 );
}

double roundToTenths( double n )
{ 
   return floor( n * 10 + .5 ) / 10;
}

double roundToHundreths( double n )
{ 
   return floor( n * 100 + .5 ) / 100;
}

double roundToThousandths( double n )
{ 
   return floor( n * 1000 + .5 ) / 1000;
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
