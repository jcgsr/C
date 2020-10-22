/*
 * jó 07.01.2018
 */

 #include<stdio.h>
 #include<locale.h>

 int main(void){

    printf("N\t10*N\t100*N\t1000*N\n");
    int num = 1;
    int n = 1;

    while (num <= 10){
        printf("\n%d\t%d\t%d\t%d",n*1, n*10, n*100, n*1000);
        num++;
        n++;

    }

 }
