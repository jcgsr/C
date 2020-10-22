/* Exercise 4.11 Solution 
 * jó 21.01.2018
 */
#include <stdio.h>

int main( void )
{ 
   int num, val, menor, i;
   
   printf("\t\tESSE PROGRAMA INFORMA O MENOR DOS VALORES\n\t\tINFORMADOS PELO USUÁRIO\n");
 	printf("\t\t=========================================\n");

   printf( "Digite a quantidade de valores a serem processados: " );
   scanf( "%d", &num );
   printf( "Digite um número: " );
   scanf( "%d", &menor );

   for ( i = 2; i <= num; i++ )
   { 
      printf( "Próximo número: " );
      scanf( "%d", &val );

      if ( val < menor )
         menor = val;
   }

   printf( "\nO menor número foi: %d\n", menor );

   return 0;
}


