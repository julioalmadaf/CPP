#include<stdio.h>
#include<conio.h>
main()
{
	int vect[10];
	for(int i=0;i<10;i++)
	{
		printf("Introduce un numero \n");
		scanf("%i",&vect[i]);
	}
	for (int i=0,c;i<10;i++)
	{
		c=0;
		for(int j=1;j<12;j++)
		{
			if (vect[i]==vect[j])
			c++;
		}
		printf("%i se repitio %i veces \n",vect[i],c);
	}
	getch();
}
