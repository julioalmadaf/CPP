#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	printf("Escribe un numero");
	scanf("%i", &num);
	(num%2==0)?printf("Es divisible entre 2"):printf("");
	(num%3==0)?printf(" Es divisible entre 3"):printf("");
	(num%5==0)?printf(" Es divisible entre 5"):
	printf("No se puede dividir entre 2, 3 ni 5");
	getch();		
	}
