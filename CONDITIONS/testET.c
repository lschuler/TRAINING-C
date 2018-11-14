#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int age;
	int argent;

	age = 20;
	argent = 100000;
	if (age > 30 || argent > 100000)
	{
		printf("Bienvenue chez PicsouBanque\n");
	}
	else
	{
		printf(" Hors de ma vue miserable !\n");
	}

	return 0;
}
