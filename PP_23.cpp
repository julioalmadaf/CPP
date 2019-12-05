#include<stdio.h>
#include<conio.h>
#include<math.h>
main ()
{
	int anio;
	printf("Introduce un anio");
	scanf("%i",&anio);
	(anio%400 == 0 || (anio%4==0 && anio%100!=0)) ? printf("Es un anio Bisiesto") : printf("No es año bisiesto");
getch();
}
