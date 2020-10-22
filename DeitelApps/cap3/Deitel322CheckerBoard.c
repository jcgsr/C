/*
 * jó 12.01.18
 */

#include<stdio.h>

int main()
{
    int x = 1;

    while (x <= 4)
    {
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    x++;
    }
}


/*
int main()
{
   int side = 8, row, mod;

   while ( side >= 1 )
   {
      row = 8;
      mod = side % 2;

      while ( row >= 1 )
      {
         if ( mod != 0 )
         {
            printf( " " );
            mod = 0;
         }
         printf( "* " );
         --row;
      }

      printf( "\n" );
      --side;
   }

   return 0;
}
*/
