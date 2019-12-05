#include <stdio.h>
#include <conio.h>

int estaEn(int elem, int v[100], int j) {
	for (int i = 0; i < j; i++) 
	    if (elem == v[i])
	        return 1;
	return 0;
}

int sinRepetir(int v1[100], int v2[100], int n) {
	int j = 0;
	for(int i = 0; i < n; i++) {
		if (!(estaEn(v1[i], v2, j))) {
			v2[j] = v1[i];
			j++;
		}
	}
	return j;
}
main() {
	int v1[100], v2[100], i = 0, n;
	printf("Introduzca la longitud del vector: ");
	scanf("%i", &n);
	while(i < n) {
		printf("Introduzca elemento %i: ", i+1);
		scanf("%i", &v1[i]);
		i++;
	}
	n = sinRepetir(v1, v2, n);
	printf("Vector de elementos sin repetir: ");
	for(int i = 0; i < n; i++)
         printf("%i ", v2[i]);
	getch();      
}
