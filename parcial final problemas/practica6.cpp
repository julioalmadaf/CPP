#include <stdio.h>
#include <conio.h>

main() {
    int A[100], B[100], C[100], len;
    printf("Introduzca la longitud de los vectores: ");
    scanf("%i", &len);
    for (int i = 0; i < len; i++) {
    	printf("Introduzca elemento %i del primer vector: ", i+1);
    	scanf("%i", &A[i]);
    	printf("Introduzca elemento %i del primer vector: ", i+1);
    	scanf("%i", &B[i]);
    	C[i] = A[i] + B[i];
    }
    printf("La suma de los dos vectores es: ");
    for (int i = 0; i < len; i++)
    	printf("%i ", C[i]);
	getch();      
}
