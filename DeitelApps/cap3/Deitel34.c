/*
 * js 07.01.2018
 */

 #include<stdio.h>

 int main(void){
    printf("ESSE PROGRAMA CALCULA QUANTOS DOS 10 ALUNOS DA UNI\nPASSARAM NA PROVA PARA CORRETOR DA BOLSA\n\n");

    int aprov = 0;
    int reprov = 0;
    int contAluno = 1;
    int result;


    while (contAluno <= 10){
        printf("Digite o resultado (1=Aprov ou 2=Reprov): ");
        scanf("%d", &result);

        if (result == 1){
            aprov += 1 ; // aprov = aprov + 1 || aprov++
        }
        else{
            reprov += 1;
        }
        contAluno += 1;


    }
    printf("\nNúmero de aprovados foi %d.", aprov);
    printf("\nNúmero de reprovados foi %d.", reprov);

    if (aprov > 8){
        printf("\nBonus para o Instrutor!");
    }
    return 0;

 }
