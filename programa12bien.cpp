/*12.	Programa que le pide al usuario
 dos cadenas de texto y el programa nos dice si son o no iguales.*/
#include<stdio.h>
#include<conio.h>
main()
{
	char cad[20], cad2[20];
	int i,l,l2,x;
	l=l2=i=0;
	scanf("%s", &cad);
	scanf("%s", &cad2);
	while (cad[l]!='\0' || cad2[l2]!='\0')
	{
			if(cad[l]!='\0')
            l++;
            if(cad2[l2]!='\0')
            l2++;
	}
	x=l<=l2?l:l2;
    i=0;
    while(i<x && cad[i]==cad2[i])
    {
                i++;
    }
    if(i==x)printf("Son iguales");
    else printf ("No son iguales");
	getch();
}
