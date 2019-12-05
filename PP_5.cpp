#include <stdio.h>
#include <conio.h>

main()
{
	float C, K, F;
	printf("Introduce la temperatura en grados centigrados\n");
	scanf("%f", &C);
	K = C + 273.15;
	F = 1.8 * C + 32;
	printf("En grados Kelvin es %f y en Farenheit es %f", K, F);
	getch();
}
