#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	char nom;
	printf("Introduce un numero entre 0 y 999 ");
	scanf("%i",&num);
	nom=num/100;
	nom==9?printf("Novecientos "):
	nom==8?printf("Ochocientos "):
	nom==7?printf("Setecientos "):
	nom==6?printf("seiscientos "):
	nom==5?printf("Quinientos "):
	nom==4?printf("Cuatrocientos "):
	nom==3?printf("Trecientos "):
	nom==2?printf("Docientos "):
	nom==1?printf("Cien "):
	printf("");
	num%=100;
	nom=num/10;
	nom==9?printf("Noventa "):
	nom==8?printf("Ochenta "):
	nom==7?printf("Setenta "):
	nom==6?printf("Sesenta "):
	nom==5?printf("Cincuenta "):
	nom==4?printf("Cuarenta "):
	nom==3?printf("Treinta "):
	nom==2?printf("Veinti"):
	nom==1?printf("Cien "):
	printf("");
	num%=10;
	nom=num;
	nom==9?printf("Nueve "):
	nom==8?printf("Ocho "):
	nom==7?printf("Siete "):
	nom==6?printf("Seis "):
	nom==5?printf("Cinco "):
	nom==4?printf("Cuatro "):
	nom==3?printf("Tres "):
	nom==2?printf("Dos "):
	nom==1?printf("Uno "):
	printf("Cero ");
	getch();
}
