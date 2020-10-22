/* 
 * jó 27.01.2018
 * C Programming Language
 */
 
 #include <stdio.h>
 
 int main()
 {
 	int c, n1;
 	
	n1 = 0;
	
	while ((c = getchar()) != EOF){
		if (c == '\n'){
			++n1;
				printf("%d\n", n1); 	
		}
	
	}
}
	
