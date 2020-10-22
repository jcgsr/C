/*
 * jó 14.01.2018
 */
 
 #include <stdio.h>
 
 int main(void)
 {
 	int sum =0;
 	int num;
 	
 	for(num = 2; num <= 100; num += 2)
 	{
 		sum += num;
 	}
 	printf("Sum is %d\n", sum);
 	return 0;
 }
