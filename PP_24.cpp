#include<stdio.h>
#include<conio.h>
main()
{
	int mony, moncin, mondie, billcincu, billcien, billquin, fin;
	printf("Introduce la cantidad de monedas de 1 que quieras");
	scanf("%i", &mony);
	printf("Introduce la cantidad de monedas de 5 que quieras");
	scanf("%i", &moncin);
	printf("Introduce la cantidad de monedas de 10 que quieras");
	scanf("%i", &mondie);
	printf("Introduce la cantidad de billetes de 50 que quieras");
	scanf("%i", &billcincu);
	printf("Introduce la cantidad de billetes de 100 que quieras");
	scanf("%i", &billcien);
	printf("Introduce la cantidad de billetes de 500 que quieras");
	scanf("%i", &billquin);
	fin=(mony*1)+(moncin*5)+(mondie*10)+(billcincu*50)+(billcien*100)+(billquin*500);
	printf("Tu total es %i", fin);
	getch();
}
