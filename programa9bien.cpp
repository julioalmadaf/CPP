/*9.	Hacer un programa que  capture una cadena  y que  imprima la  suma de su letra dependiendo de la posición en el abecedario  y no con respecto al  ascii. 
	Ejemplo:     Entra:   Manuel
		       Salida: 42  */
#include<stdio.h>
#include<conio.h>
main()
{
	char cad[20];
	int i,x, can;
	i=0;
	can=0;
	printf("Escribe algo:\n");
	scanf("%s",cad);
	while (cad[i]!='\0')
	{
		switch (cad[i])
		{
			case 'a': x=1; break;
			case 'b': x=2; break;
			case 'c': x=3; break;
			case 'd': x=4; break;
			case 'e': x=5; break;
			case 'f': x=6; break;
			case 'g': x=7; break;
			case 'h': x=8; break;
			case 'i': x=9; break;
			case 'j': x=10; break;
			case 'k': x=11; break;
			case 'l': x=12; break;
			case 'm': x=13; break;
			case 'n': x=14; break;
			case 'o': x=15; break;
			case 'p': x=16; break;
			case 'q': x=17; break;
			case 'r': x=18; break;
			case 's': x=19; break;
			case 't': x=20; break;
			case 'u': x=21; break;
			case 'v': x=22; break;
			case 'w': x=23; break;
			case 'x': x=24; break;
			case 'y': x=25; break;
			case 'z': x=26; break;
			case 'A': x=1; break;
			case 'B': x=2; break;
			case 'C': x=3; break;
			case 'D': x=4; break;
			case 'E': x=5; break;
			case 'F': x=6; break;
			case 'G': x=7; break;
			case 'H': x=8; break;
			case 'I': x=9; break;
			case 'J': x=10; break;
			case 'K': x=11; break;
			case 'L': x=12; break;
			case 'M': x=13; break;
			case 'N': x=14; break;
			case 'O': x=15; break;
			case 'P': x=16; break;
			case 'Q': x=17; break;
			case 'R': x=18; break;
			case 'S': x=19; break;
			case 'T': x=20; break;
			case 'U': x=21; break;
			case 'V': x=22; break;
			case 'W': x=23; break;
			case 'X': x=24; break;
			case 'Y': x=25; break;
			case 'Z': x=26; break;
		}
		i++;
		can=can+x;
	}
	printf("%i",can);
	getch();
}
/*Manuel en realidad debe dar 66*/
