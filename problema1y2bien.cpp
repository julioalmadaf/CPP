/*1.	Una compa��a tiene una f�rmula poco com�n para calcular el sueldo de sus empleados. El sueldo semanal para un empleado es igual a:
$ 100 + $(edad del empleado) + ($ 1 + 2 + 3+ ... + a�os en la compa��a)
2.	As�, si un empleado de 37 a�os de edad tiene una antig�edad de seis a�os, ganar�a el sueldo semanal de $ 158, ya que es la suma de 100 + 37 (edad) + 21
, en donde 21 es la suma de 1+2+3+4+5+6. Escriba un algoritmo para calcular el pago quincenal de un empleado, recibiendo como entrada la edad y los a�os que 
lleva en la compa��a
*/
#include<stdio.h>
#include<conio.h>
main()
{
	int x,y, suel,i;
	printf("Introduce tu edad \n");
	scanf("%i", &x);
	printf("Introduce los a�os que llevas trabajando con nosotros \n");
	scanf("%i", &y);
	i=y;
	suel=100+x;
		while (i!=0)
		{
			i--;
			y=y+i;
		}
		suel=suel+y;
		printf("Tu sueldo es %i", suel);
	getch();
}
