#include<stdio.h>
#include<conio.h>
main()
{
	int num, mod, res;
	printf("Introduce un numero");
	scanf("%i", &num);
	printf("Introduce un modulo");
	scanf("%i", &mod);
	res=num%=mod;
	if (res<15) printf("El modulo es menor a 15");
	else("");
	getch();
}
