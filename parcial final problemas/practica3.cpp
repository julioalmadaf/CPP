#include <stdio.h>
#include <conio.h>

main()
{
	int matriz[100][100], x = 1, n;
	printf("Introduzca un numero: ");
	scanf("%i", &n);
	for (int i = 0; i < n; i++)
	    for (int j = 0; j < n; j++)
	    	if (j > i) {
	    		 matriz[j][i] = x;
	    		 x++;
	    	}
		    else matriz[j][i] = 0;   
	for (int i = 0; i < n; i++)
	    for (int j = 0; j < n; j++)
	    {
	    	printf("%i\t", matriz[i][j]);
	        if (j == n - 1) printf("\n");
	    }       
	getch();      
}
