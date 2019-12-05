#include <stdio.h>
#include <conio.h>
main()
{
	char cad1[200], cad2[200];
	int i = 0, j= 0;
	printf("Escribe algo: ");
	scanf("%s", &cad1);
	printf("Escribe otra cosa: ");
	scanf(" %s", &cad2);
	while (cad1[i] != '\0')
	{
		i++;
	}
	while (cad2[j] != '\0')
	{
		cad1[i++] = cad2[j++];
	}
	printf("%s", &cad1);
	getch();
}
