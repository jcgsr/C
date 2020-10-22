/*
 * jó 23.01.18
 */

#include<stdio.h>

int main()
{
	printf("\tESSE PROGRAMA INFORMA A TAXA MÉDIA DE CRESCIMENTO ANUAL\n\t\tPELOS PRÓXIMOS 75 ANOS A PARTIR DE 2018\n");
 	printf("\t=======================================================\n\n");
	
	float pop = 7.600;
   float tx = 0.012;
   float nPop = pop*tx;
   int i = 2018;
   
   
   printf("\tAno\t\tPop em Bi\tAumento\n");
  
   	while ( i <= 2092)
   	{
   		
   		printf("\t%d\t\t%.3f\t\t%.3f\n", i, pop, nPop);
   		i++;
   		pop = pop + nPop;
   		nPop = pop*tx;
   		
   	}
   	printf("\nA população mundial no ano de 2077 será mais que o dobro da de 2018.\n");
   	
   	
}


