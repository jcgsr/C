//04.01.2018 jó

#include<stdio.h>

int main(void){
	int cont;
	int nota;
	int total;
	int media;
	
	printf("\t\tESSE PROGRAMA CALCULA A MÉDIA DE 10 NOTAS\n\n");
	
	/* fase de inicializar*/
	total = 0;
	cont = 1;
	
	/* fase de processo*/
	
	while (cont <= 10){
		printf("Insira a nota: ");
		scanf("%d", &nota);
		total = total + nota;
		cont = cont + 1;
	}
	media = total / 10;
	printf("A média da turma é %d\n.", media);
	
	return 0;
}
