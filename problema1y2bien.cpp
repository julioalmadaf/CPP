/*1.	Una compañía tiene una fórmula poco común para calcular el sueldo de sus empleados. El sueldo semanal para un empleado es igual a:
$ 100 + $(edad del empleado) + ($ 1 + 2 + 3+ ... + años en la compañía)
2.	Así, si un empleado de 37 años de edad tiene una antigüedad de seis años, ganaría el sueldo semanal de $ 158, ya que es la suma de 100 + 37 (edad) + 21
, en donde 21 es la suma de 1+2+3+4+5+6. Escriba un algoritmo para calcular el pago quincenal de un empleado, recibiendo como entrada la edad y los años que 
lleva en la compañía
*/
#include<stdio.h>
#include<conio.h>
main()
{
	int x,y, suel,i;
	printf("Introduce tu edad \n");
	scanf("%i", &x);
	printf("Introduce los años que llevas trabajando con nosotros \n");
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
