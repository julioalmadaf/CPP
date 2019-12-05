/*5.	Crear un programa en C que lea un número entero y positivo y que escriba tres columnas. 
La primera cuenta desde uno hasta el número escrito contando de uno en uno; la segunda columna cuenta de dos en dos y la tercera de tres.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int x,c;
	printf("Introduce un numero");
	scanf("%i", &x);
	c=x;
	x=1;
	while (x<=c)
	{
		printf("%i", x);
		x++;
	}
	printf("\n");
	x=1;
	while (x<=c)
	{
		if (x%2==0) printf("%i",x);
		x++;
	}
	printf("\n");
	x=1;
	while (x<=c)
	{
		if (x%3==0) printf("%i",x);
		x++;
	}
	getch();
}
