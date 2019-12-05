#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
main()
{
	int d[2][2],d1,d2;
	d1=0;
	d2=0;
	srand(time(0));
	for (int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
			{
				printf("Introduce un valor");
				scanf("%i \t", &d[i][j]);
			}
		}
	for (int i=0;i<2;i++)
	{
		for(int j=0;j<1;j++)
		d1+=d[i][j];
	}
	printf("%i suma 1 \n",d1);
	for(int i=1, j=0;i<0,j<2;i--,j++)
	{
		d2+=d[i][j];
	}
	printf("%i suma 2",d2);
	getch;
}
