#include<stdio.h>
#include<conio.h>
main ()
{
	int mes, anio;
	printf("Introduce un anio");
	scanf("%i",&anio);
	printf("Introduce un mes");
	scanf("%i",&mes);
	(anio%400 == 0 || (anio%4==0 && anio%100!=0))?
	(mes==2)?printf("Tu mes tiene 29 dias"):
	(mes%2==0)?printf("Tu mes tiene 31 dias"):
	printf("Tu mes tiene 30 dias"):
	(mes%2==0)?printf("Tu mes tiene 30 dias"):printf("Tu mes tiene 31 dias");
getch();
}
