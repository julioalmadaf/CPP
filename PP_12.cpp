#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	float r, h, a_l, v, g;
	printf("Introduzca el radio\n");
	scanf("%f", &r);
	printf("Introduzca la altura\n");
	scanf("%f", &h);
	g = sqrt(r * r + h * h);
	a_l = 3.14159265359 * r * g;
	v = 3.14159265359 * r * r * h / 3;
	printf("El area lateral del cono es %f y su volumen es %f.", a_l, v);
	getch();
}
