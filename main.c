#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int genNumber(void){

	srand(time(0));
	int rand_value = rand()%101;
	return rand_value;
}

int askNumber(void){

	int guess;
	do{
		printf("Guess a number [0-100]: \n");
		scanf("%d", &guess);
		
	}
	while(guess < 0 || guess > 100);

	printf("Guess was: %d\n", guess);
	return guess;
}

int guessNumber(const int randomNumber){

	int guess = askNumber();

	if(guess==randomNumber){
	printf("You guessed right!!\n");
	return 0;
	}
	if(guess>randomNumber){
		printf("You guessed too high!\n");
	return 1;
	}
	if(guess<randomNumber){
		printf("You guessed too low!\n");
	return 1;
	}

	printf("Something failed badly!!\n");
	return 0;
}

int main(void){

	int randomNumber=genNumber();

	while(guessNumber(randomNumber)){;}

	return 0;
}
