#include<stdio.h>
#include<conio.h>
main()
{
	int lis[2][2],c;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("Intro. Un numero");
			scanf("%i", &lis[i][j]);
		}
	}
	for(int i=0,j=0;i<2;i++)
	{
		c=lis[i][j]+lis[i][j++];
		printf("suma= %i \n", c);
	}
	getch();
}
