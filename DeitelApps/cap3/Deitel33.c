/*
 * primeiro programa como Codeblocks
 * jo 05.01.2018
 */

 #include<stdio.h>
 #include <locale.h>


 int main(void){

    setlocale(LC_ALL,"portuguese");

    int contar;
    int nota;
    int total;

    float media;

    /* inicializar */

    total = 0;
    contar = 0;

    printf("ESSE PROGRAMA CALCULA A MÉDIA DE QUANTAS NOTAS FOREM INSERIDAS\n\n");


    printf("Informe a nota, -1 para terminar: ");
    scanf("%d", &nota);

    while (nota != -1){
        total = total + nota;
        contar = contar + 1;

        printf("Informe a nota, -1 para terminar: ");
        scanf("%d", &nota);

    }
    if (contar != 0){
        media = (float) total / contar;
        printf("A média das notas informadas foi: %.2f", media);
    }
    else{
        printf("Nenhuma nota informada.\n");
    }
    return 0;


 }
