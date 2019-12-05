/*7.	Hacer un programa que realice un encriptado de un código  de texto   
	Ejemplo:     Entra:   Manuel
		       Salida: NBoVFm   
*/
#include<stdio.h>
#include<conio.h>
main()
{
	char cad[20];
	int i;
	i=0;
	printf("Escribe una cadena: \n");
	scanf("%s", &cad);
	while (cad[i]!='\0')
	{
		cad[i]=cad[i]+37;
		i++;
	}
	printf("%s", cad);
	getch();
}
