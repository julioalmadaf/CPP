#include<stdio.h>
#include<conio.h>
main()
{
	float x,y;
	printf ("Escribe un numero que este entre 20 y -5 \n");
	scanf("%f",&x);
	if (x==0) printf("No es valido");
	if (x<=20 && -5<=x) 
	{
		y=1+(1/x);
		printf("%f", y);
	}
	else printf("No es valido");
	getch();
}
