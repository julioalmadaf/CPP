#include<stdio.h>
#include<conio.h>
main()
{
	char cad[20];
	int i, c, x;
	i=0;
	scanf("%s", &cad);
	while (cad[i]!='\0')
	{
		i++;
	}
	while (x!=2)
	{
		c=1;
		x=0;
		while (c<=i)
		{
			if (i%c==0)x++;
			c++;
		}
		if (x!=2)
		{
		printf("No es un numero primo, prueba otro \n");
		scanf("%s", &cad);
		i=0;
		while (cad[i]!='\0')
			{
				i++;
			}
		}
	}
	printf("Es Numero primo");
	getch();
}
