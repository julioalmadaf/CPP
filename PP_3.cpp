#include <stdio.h>
#include <conio.h>

main()
{
	float cantidad, porcentaje, resultado;
	printf("Introduce la cantidad inicial: ");
	scanf("%f", &cantidad);
	printf("Introduce el porcentaje: ");
	scanf("%f", &porcentaje);
	resultado = cantidad * porcentaje / 100;
	printf("El porcentaje sobre la cantidad inicial es %f", resultado);
	getch();
}
