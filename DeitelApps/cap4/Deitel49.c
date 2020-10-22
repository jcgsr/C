/*
 * jó 21.01.2018
 */
 
 #include<stdio.h>
 
 int main (void)
 {
 	printf("\t\tESSE PROGRAMA SOMA A QUANTIDADE DE VALORES\n\t\tESPECIFICADA PELO USUÁRIO\n");
 	printf("\t\t==========================================\n");
 	
 	int s = 0;
 	int n;
 	int v;
 	int i;
 	printf("Quantos valores serão somados?\n");
 	scanf("%d", &n);
 	
 	if (n >= 1)
 	{ 	
 		for (int i = 1; i <= n; i++)
 		{
 			printf("Digite um número: ");
 			scanf("%d", &v);
 			s += v;
 				 
 		}
 		
 		printf("A soma dos %d valores informados foi %d\n", n, s);
 	}
 	return 0;
 }
