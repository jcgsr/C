/*
 * jó 21.01.2018
 */
 
 #include<stdio.h>
 
 int main (void)
 {
 	printf("\t\tESSE PROGRAMA CALCULA A MÉDIA DE VALORES\n\t\tINFORMADOS PELO USUÁRIO\n");
 	printf("\t\t========================================\n");
 	
 	int valCont = 0;
 	int valor, valor1;
 	int soma = 0;
 	int soma1;
 	int media;
 	int sent = 9999;
 	int sent1 = 9999;
 	printf("Digite um número <9999 finalizar>: ");
 	scanf("%d", &valor1);
 	
 	while (valor != sent)
 	{
 		printf("Digite um número <9999 finalizar>: ");
 		scanf("%d", &valor);
 		soma += valor;
 		valCont++;
 		if (valor == sent)
 		{
 			break;
 		}
 	}
 	soma1 = soma - sent1;
 	media = (soma1 + valor1) / valCont;
 	
 	printf("A média desses %d valores é igual a %d.\n", valCont, media);
 }
