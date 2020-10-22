/* Exercise 5.35 solution jó 26.01.2018*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessGame( void );

int main()
{ 
   srand( time( NULL ) );

   /* run the game */
   guessGame();

   return 0;
}

void guessGame( void )
{ 
   int x, guess, response;

   do
   { 
      x = 1 + rand() % 1000;
      printf("\t**GUESS GAME**\n");
      printf("\t==============\n");
      printf( "\nI have a number between 1 and 1000.\n" );
      printf( "Can you guess my number?\n" );
      printf( "Please type your first guess.\n? " );
      scanf( "%d", &guess );

      while ( guess != x )
      { 

         if ( guess < x )
            printf( "Too low. Try again.\n? " );
         else
            printf( "Too high. Try again.\n? " );

         scanf( "%d", &guess );
      }

      printf( "\nExcellent! You guessed the number!\n" );
      printf( "Would you like to play again?\n" );
      printf( "Please type ( 1=yes, 2=no )? " );
      scanf( "%d", &response );
   } while ( response == 1 );
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
