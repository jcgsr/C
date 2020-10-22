#include<stdio.h>
#include<locale.h>

 int main(void){

    printf("A\tA+2\tA+4\tA+6\n");

    int num = 3;


    while (num <= 15){
        printf("\n%d\t%d\t%d\t%d", num, num+2, num+4, num+6);
        num+=3;

    }
 }
