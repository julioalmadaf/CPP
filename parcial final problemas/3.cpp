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
			if (j==i ||i<j)
			printf("0 \t");
			else 
			{
				lis[i][j]=c;
				printf("%i \t", lis[i][j]);
				c++;
			}
		}
		printf("\n");
	}
	getch();
}
