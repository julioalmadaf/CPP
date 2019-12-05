/*3.	Un entero positivo n se llama perfecto si n es igual a la suma de todos sus divisores diferentes de él. Por ejemplo, 6 es perfecto porque 6 = 1 + 2 + 3.
 Escriba un programa que reciba como entrada un número entero positivo, y nos indique si éste es perfecto o no. Además, el programa debe imprimir todos los
  divisores del número.*/
#include<stdio.h>
#include<conio.h>
main()
{
	int num,i, sum, multi;
	printf("Escribe un numero para ver si es perfecto: \n");
	scanf("%i", &num);
	i=1;
	sum=0;
	while (i<num)
	{
		multi=num%i;
		if(multi==0) 
		{
			printf("%i \n",i),
			sum=sum+i;
		}
		i++;
	}
	if(sum==num)
	{
		printf("\nEl numero %d es perfecto", num);
	}
	else
	printf("\nEl numero %d no es perfecto.", num);
	getch();
}
