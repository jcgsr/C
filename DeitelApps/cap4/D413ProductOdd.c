/*
 * jó 21.01.2018
 */
 
 #include<stdio.h>
 
 int main (void)
 {
 	printf("\t\tESSE PROGRAMA CALCULA O PRODUTO DOS ÍMPARES DE 1 A 15\n");
 	printf("\t\t=====================================================\n");
 	
 	int product = 1;
 	for (int i = 1; i <= 15; i += 2)
 	{
 		printf("%d " , i);
 		product *= i;
 	}
 	printf("\nO produto dos ímpares acima é igual a %d.\n", product);
 }
