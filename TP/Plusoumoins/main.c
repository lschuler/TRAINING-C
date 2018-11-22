#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int		nbMystery;
	int		MAX ;
	int		MIN ;
	int 	game;
	int		input;
	
	game = 1;
	printf("The game it's begin, have fun =) !\n");
	printf("Choose your max value\n");
	scanf("%d", &MAX);
	
	printf("Choose your min value\n");
	scanf("%d", &MIN);
	
	srand(time(NULL));
	nbMystery = (rand() % (MAX - MIN + 1)) + MIN ;

	printf("%d\n",nbMystery);
	while(game == 1)
	{

		printf("Enter a number :");
		scanf("%d", &input);
	
		if(input < nbMystery)
		{
			printf("it's higher, gollum... \n");
		}

		else if(input > nbMystery)
		{
			printf("it's lower, try again !\n");
		}

		else if(input == nbMystery)
		{
			printf("Congratulation ! you win a cookie.O\n");
			game = 0;
		}
	}	
	return 0;
}	
