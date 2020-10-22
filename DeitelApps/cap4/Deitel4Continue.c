/*
 * jó 21.01.2018
 */
 
 #include<stdio.h>
 
 int main (void)
 {
 	int x;
 	
 	for(x = 1; x <= 10; x++)
 	{
 		if (x == 5)
 		{
 			continue;
 		}
 		printf("%d ", x);
 	}
 	printf("\nUsed 'continue' to skip printing the value 5\n");
 	return 0;
 }
