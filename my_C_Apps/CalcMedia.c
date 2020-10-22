/*
 * jó 14.01.2018
 */
 
 #include <stdio.h>
 
 int main()
 {
 	printf("\t\tESSE PRORAMA CALCULA A MÉDIA DE DUAS NOTAS");
 	float n1, n2, m;
 	
 	
 	printf("\nPrimeira nota: ");
 	scanf("%f", &n1);
 	
 	printf("\nSegunda nota: ");
 	scanf("%f", &n2);
 	
 	m = (n1 + n2) / 2;
 	
 	printf("\nMÉDIA: %.2f\n", m);
 	
 	while (n1 != -1)
 	{
 		printf("\nPrimeira nota: ");
 		scanf("%f", &n1);
 	
 		printf("\nSegunda nota: ");
 		scanf("%f", &n2);
 	
 		m = (n1 + n2) / 2;
 	
 		printf("\nMÉDIA: %.2f\n", m);
 	}
 	
 }
