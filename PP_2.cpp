#include <stdio.h>
#include <conio.h>

main()
{
	float euros, dolares;
	printf("Cuantos euros quieres convertir?\n");
	scanf("%f", &euros);
	dolares = euros * 1.29595;
	printf("La cantidad en dolares es %f", dolares);
	getch();
}
