#include<stdio.h>
#include<conio.h>
main()
{
	int lis[4][4],c;
	c=1;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			lis[i][j]=c;
			c++;
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if (j==i)
			printf("0 \t");
			else printf("%i \t", lis[i][j]);
		}
		printf("\n");
	}
	getch();
}
