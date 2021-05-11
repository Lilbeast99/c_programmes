//Guessing Game written using C program By Emmanuel King
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int hint;
	int guess;
	int guesscount=0;
	int guesslimit = 5;
	int outofguesses=0;
	int r,x;
	
	srand((unsigned)time(NULL));
	
	for(x=0; x<2; x++)
	{
		r = rand();
		r%=101;
	}
	
	printf("\tGUESSING GAME 3.0\n");
	printf("=============================================\n\n");
	printf("It's pretty simple to play...Just guess the secret number[0..100]\n\n");
	printf("Guess secret number[%d(tries)left]: ",guesslimit-guesscount);
	scanf("%d",&guess);
	guesscount = 1;
	printf("Would you like a hint? \n");
	printf("press<1>for Yes\n");
	printf("press<2>for No \n");
	scanf("%d",&hint);
	
	while(guess !=r && outofguesses==0)
	{
		if(guesscount<guesslimit)
		{
			printf("\nWRONG!Try Again:[%d(tries)left]: ",guesslimit-guesscount);
			scanf("%d",&guess);
			guesscount++;
		}
		else
		{
			outofguesses = 1;
		}
	}
	if(outofguesses == 1)
	{
		putchar('\n');
		printf("Sorry...You are out of guesses. The secret number was %d\n",r);
	}
	else
	{
		printf("Correct!! You guessed it**$$$\n");
	}
		
	return 0;
}