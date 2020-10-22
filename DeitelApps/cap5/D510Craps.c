/*
 * jó 24.01.18
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 	enum Status {CONTINUE, WON, LOST}; //enumereation represent game status
 	
 	int rollDice(void); // function prototype

int main (void)
{
	printf("\tDICE GAME\n");
	printf("\t**CRAPS**\n");
 	printf("\t=========\n\n");
 	
 	int sum;
 	int myPoint;
 	
 	enum Status gameStatus;
 	
 	srand(time(NULL));
 	
 	sum = rollDice(); //first roll of the dice
 	
 	switch (sum)
 	{
 		case 7:
 		case 11:
 			gameStatus = WON;
 			break;
 			
 		case 2:
 		case 3:
 		case 12:
 			gameStatus = LOST;
 			break;
 			
 		default:
 			gameStatus = CONTINUE;
 			myPoint = sum;
 			printf("Point is %d\n", myPoint);
 			break;
 	}
 	
 	while (gameStatus == CONTINUE)
 	{
 		sum = rollDice();
 		
 		if (sum == myPoint)
 		{
 			gameStatus = WON;
 		}
 		else
 		{
 			if (sum == 7)
 			{
 				gameStatus = LOST;
 			}
 		}
 	}
 	if (gameStatus == WON)
 	{
 		printf("Player wins\n");
 	}
 	else
 	{
 		printf("Player loses\n");
 	}
 	return 0; 	
 	
}

int rollDice(void)
{
	int die1;
	int die2;
	int workSum;
	
	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	workSum = die1 + die2;
	
	printf ("Player rolled %d + %d = %d\n", die1, die2, workSum);
	return workSum;
}
