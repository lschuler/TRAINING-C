#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int		nombreMystere;
	int		result;
	int		MAX ;
	int		MIN ;
	int		win;
	int		count;
	int		rejouer;
	int		niveaudedifficulte;

	rejouer = 1;
	srand(time(NULL));
 
	while (rejouer == 1)
	{
		printf("Niveau 1 nombre de 1 a 100\n");
		printf("Niveau 2 nombre de 1 a 1 000\n");
		printf("niveau 3 nombre de 1 a 10 000\n");
		scanf("%d", &niveaudedifficulte);
	do{
		printf("Votre choix"\n);
		if(niveaudedifficulte == 1 )
		{
		MAX = 100;
		nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
		printf("Nombre Mystere : %d\n", nombreMystere);
		win = 0;
		count = 8;
		}		
		else  if(niveaudedifficulte ==2)
		{
		MAX = 1000;
		nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
		}
		else  if(niveaudedifficulte ==3)
		{
		MAX = 10000;
		nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
		}
		while (win == 0 && count > 0)
		{
			printf("Il vous reste %d essais\n", count);
			printf("Entrez un nombre :");
			scanf("%d", &result);
			count = count - 1;


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

		}
		printf("Voulez-vous rejouer ?\n0. Non\n1. Oui\n");
		scanf("%d", &rejouer);
	}
	return 0;
}
