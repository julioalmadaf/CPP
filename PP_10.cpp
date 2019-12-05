#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	float n, r, p, a, lado, angulo;
	printf("¿Cuantos lados tiene tu poligono? ");
	scanf("%f", &n);
	printf("¿Cual es el radio del circulo en el que esta inscrito? ");
	scanf("%f", &r);
	angulo = 2 * 3.14159265359 / n;
	lado = sqrt(2 * r * r * (1 - cos(angulo)));
	p = n * lado;
	a = p * (sqrt(r * r - lado * lado/ 4)) / 2;
	printf("El perimetro de poligono es %f y su area es %f.", p, a);
	getch();	
}
