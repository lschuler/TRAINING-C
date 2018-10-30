#include <stdio.h>

#include <stdlib.h>

int main ()

{

int resultat = 0, nombre1 = 0, nombre2 = 0, nombre3 = 0;

printf("Entrer le nombre 1 ");
scanf("%d", &nombre1);
printf("Entrer le nombre 2 ");
scanf("%d", &nombre2);
printf("Entrer le nombre 3 ");
scanf("%d", &nombre3);

resultat =  nombre1 * nombre2 + nombre3;
printf("%d * %d + %d = %d\n", nombre1,nombre2,nombre3,resultat);

return 0;

}
