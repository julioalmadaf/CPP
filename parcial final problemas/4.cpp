#include <stdio.h>
#include <conio.h>
int in(int elem, int v[10], int j);
int no(int v1[10], int v2[10], int n); 
main() 
{
	int v1[100], v2[10], i = 0, n;
	printf("Introduzca la longitud del vector: ");
	scanf("%i", &n);
	while(i < n) 
	{
		printf("Intro. elemento %i: ", i+1);
		scanf("%i", &v1[i]);
		i++;
	}
	n = no(v1, v2, n);
	printf("Elementos sin repetir: ");
	for(int i = 0; i < n; i++)
         printf("%i ", v2[i]);
	getch();      
}
int in(int elem, int v[10], int j) 
{
	for (int i = 0; i < j; i++) 
	    if (elem == v[i])
	        return 1;
	return 0;
}
int no(int v1[10], int v2[10], int n) 
{
	int j = 0;
	for(int i = 0; i < n; i++) {
		if (!(in(v1[i], v2, j))) {
			v2[j] = v1[i];
			j++;
		}
	}
	return j;
}

