#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int			nombreMystere;
	int			result;
	int			win = 0;
	const int	MAX = 100;
	const int	MIN = 1;

	srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

//	printf("Nombre Mystere : %d\n", nombreMystere);

	while (win == 0)
	{
		printf("Entrez un nombre :");
		scanf("%d", &result);

		if (result < nombreMystere)
		{
			printf("C'est plus !\n");
		}
		else if (result == nombreMystere)
		{
			printf("C'est juste !\n");	
			win = 1;
		}
		else if (result > nombreMystere)
		{
			printf("C'est moins !\n");
		}
		else
		{
			printf("Nombre invalide !\n");
		}
	}


	return 0;
}
