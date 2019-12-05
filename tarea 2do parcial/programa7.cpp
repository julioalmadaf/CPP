#include<stdio.h>
#include<conio.h>
main()
{
int num, nom;
printf("Pon un numero");
scanf("%i", &num);
printf("Pon otro numero");
scanf("%i", &nom);
if (num%nom==0) printf("Su numero es multiplo del otro");
else printf("");
getch;
}
