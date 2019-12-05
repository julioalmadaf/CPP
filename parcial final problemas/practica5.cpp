#include <stdio.h>
#include <conio.h>
int estaEn(int elem, int v[100], int j) {
	for (int i = 0; i < j; i++) 
	    if (elem == v[i])
	        return 1;
	return 0;
}

int vectorSinElementosRepetidos(int v[100], int final[100], int n) {
	int j = 0;
	for(int i = 0; i < n; i++) {
		if (!(estaEn(v[i], final, j))) {
			final[j] = v[i];
			j++;
		}
	}
	return j;
}

int freqs(int elem, int v[100], int n) {
	int veces = 0;
	for (int i = 0; i < n; i++)
	    if (elem == v[i]) veces++;
	return veces;
}

void imprimirFrequencias(int v[100], int final[100], int n)  {
	int len = vectorSinElementosRepetidos(v, final, n);
	for (int i = 0; i < len; i++) {
		printf("%i\t%i\n", final[i], freqs(final[i], v, n));
	}
}

main() {
    int v[100], i = 0, n, final[100];
	printf("Introduzca la longitud del vector: ");
	scanf("%i", &n);
	while(i < n) {
		printf("Introduzca elemento %i: ", i+1);
		scanf("%i", &v[i]);
		i++;
	}
	printf("Numero\tFrequencias\n");
	imprimirFrequencias(v, final, n);
	getch();      
}
