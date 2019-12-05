#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int matriz[20][20], n, diag1 = 0, diag2 = 0;
	printf("Introduzca n: ");
	scanf("%i", &n);
	srand(time(0));
	for (int i = 0; i < n; i++)
	    for (int j = 0; j < n; j++)
			matriz[i][j] = rand()%1000;
	for (int i = 0; i < n; i++)
	    diag1 += matriz[i][i];
	for (int i = 0; i <n; i++)
	    diag2 += matriz[i][n-i-1]; 
	printf("%i %i\n", diag1, diag2);
	for (int i = 0; i < n; i++)
	    for (int j = 0; j < n; j++)
	    {
	    	 printf("%i ", matriz[i][j]);
	    	 if (j == n - 1)
	    	     printf("\n");
	    }
	getch();     
}
