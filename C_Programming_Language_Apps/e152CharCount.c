/* 
 * jó 27.01.2018
 * C Programming Language
 */
 
 #include <stdio.h>
 
 int main()
 {
 	long nc;
 	
 	nc = 0;
 	while (getchar() != EOF){
 		++nc;
 		printf("%ld\n", nc);
 	}
 	
 }
