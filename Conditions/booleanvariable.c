#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age;
	int majeur;

	age = 10;
	majeur = 0;
	majeur = age >= 18;
	printf("Majeur vaut : %d\n", majeur);

	return 0;
}
