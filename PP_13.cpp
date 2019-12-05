#include <stdio.h>
#include <conio.h>

main()
{
	float litros, moles;
	printf("Introduce el volumen del gas en litros: ");
	scanf("%f", &litros);
	moles = litros / 22.4;
	printf("El numero de moles en condiciones normales del gas es de %f.", moles);
	getch();
}
