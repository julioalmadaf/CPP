#include<stdio.h>
#include<conio.h>
main()
{
int num;
printf("Pon un numero");
scanf("%i", &num);
if (num%2==0) {
	num=num*num;
	printf("%i", num);
}
else {
	num=num*num*num;
	printf("%i", num);	
}
getch;
}
