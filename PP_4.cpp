#include <stdio.h>
#include <conio.h>

main()
{
	float hp, kw;
	printf("Cuantos caballos de vapor deseas convertir?\n");
	scanf("%f", &hp);
	kw = hp * 0.746;
	printf("Esto es equivalente a %f watios", kw);
	getch();	
}
