/*
 *jó 29.01.2018
 */
 
#include <stdio.h>

#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11


int main(void)
{
	
	size_t answer;
	size_t rating;
	
	int frequency[FREQUENCY_SIZE] = {0};
	
	int responses[RESPONSES_SIZE] = {1, 3 ,5, 8,6, 7, 6, 5,4, 3, 2, 1, 9, 9 , 8, 7, 	  6, 6, 5, 5, 5, 8, 8, 8, 8,4,3,2,5,7,6,1,2,4,6,7,8,9,4,7};
	
	for (answer = 0; answer < RESPONSES_SIZE; ++answer){
		++frequency[responses[answer]];
	}
	printf("%s%17s\n", "Rating", "Frequency");
	
	for(rating = 1; rating < FREQUENCY_SIZE; ++rating){
		printf("%6lu%17d\n", rating, frequency[rating]);
	}
}
