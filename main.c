#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

	srand(time(0));

	int rand_value = rand()%101;
	printf("%d\n", rand_value);
	
	printf("Guess a number: \n");
	int guess;

	scanf("%d", &guess);
	if(guess <= 100 && guess >= 0)
	{
		printf("You guessed: %d\n", guess);
	}

	



	return 0;
}