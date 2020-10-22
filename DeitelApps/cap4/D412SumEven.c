/*
 * jó 21.01.2018
 */
 
 #include<stdio.h>
 
 int main (void)
 {
 	printf("\t\tESSE PROGRAMA CALCULA A SOMA DOS PARES DE 2 A 30\n");
 	printf("\t\t================================================\n");
 	
 	int soma = 0;
 	for (int i = 2; i <= 30; i+=2)
 	{
 		printf("%d ", i);
 		printf("\n");
 		soma += i;
 			
 	}
 	printf("A soma desses números pares acima é: %d\n", soma);
 }
