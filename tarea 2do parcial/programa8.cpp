#include<stdio.h>
#include<conio.h>
main()
{
	int lit, tot;
	printf("Introduce el numero de litros que se han gastado");
	scanf("%i", &lit);
	if (lit<=50 && lit>0) printf("Tu gasto es de 6 euros");
	else {
		if (lit>50 && lit<=200){
			tot=lit*0.1+6;
			printf("Tu gasto es de %i", tot);
		}
		else {
			tot=lit*0.3+6;
			printf("Tu gasto es de %i", tot);
		}
	}
	getch();
}
