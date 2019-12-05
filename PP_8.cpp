#include <stdio.h>
#include <conio.h>

main()
{
	double r, a;
	printf("Introduce el radio de la circunferencia\n");
	scanf("%lf", &r);
	a = 3.14159265359 * r * r;
	printf("El area de la circunferencia es %.4f", a);
	getch();	
}
