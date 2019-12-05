#include <stdio.h>
#include <conio.h>
main()
{
	char cad1[20], cad2[20];
	int i = 0, j= 0;
	printf("Introduzca la cadena 1: ");
	scanf("%s", &cad1);
	printf("Introduzca la cadena 2: ");
	scanf(" %s", &cad2);
	while (cad1[i] != '\0'&& cad2[i]!='\0')
	{
		cad1[i] = cad2[j];
		i++;
		j++;
	}
	cad1[i] = '\0';
	printf("%s", &cad1);
	getch();
}
