/*
 * Exercise 4.16 Solution 
 * jó 23.01.18
 */

#include<stdio.h>

int main()
{
	int row, col, space;

   /* Pattern A */
   for ( row = 1; row <= 10; row++ )
   { 
      for ( col = 1; col <= row; col++ )
         printf( "*" );
       
      printf( "\n" );
      
	}
	/* Pattern B*/
	printf("\n");
   for ( row = 10; row >= 1; row-- )
   { 
      for ( col = 1; col <= row; col++ )
         printf( "*" );
       
      printf( "\n" );
    }
    printf("\n");
    /* Pattern C */
   for ( row = 10; row >= 1; row-- )
   { 

      for ( space = 1; space <= 10 - row; space++ )
         printf( " " );

      for ( col = 1; col <= row; col++ )
        printf( "*" );

      printf( "\n" );
   }

   printf( "\n" );
   
   /* Pattern D */
   for ( row = 1; row <= 10; row++ )
   { 

      for ( space = 1; space <= 10 - row; space++ )
         printf( " " );

      for ( col = 1; col <= row; col++ )
        printf( "*" );

      printf( "\n" );
   }

   printf( "\n" );
}
