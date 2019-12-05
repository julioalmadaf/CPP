#include<stdio.h>
#include<conio.h>
main ()
{
	int num;
	printf("Introduce un numero");
	scanf("%i", &num);
	(num==0)?printf("Tu numero es cero"):
	(num<0)?printf("Tu numero es negativo"):
	printf("Tu numero es positivo");
	getch();
	}
