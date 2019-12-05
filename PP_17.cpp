#include<stdio.h>
#include<conio.h>
main()
{
	int mes;
	printf("Introduce el numero de tu mes para decirte tu signo zodiacal");
	scanf("%i", &mes);
	(mes==1)?printf("Tu signo es capricornio"):
	(mes==2)?printf("Tu signo es acuario"):
	(mes==3)?printf("Tu signo es piscis"):
	(mes==4)?printf("Tu signo es aries"):
	(mes==5)?printf("Tu signo es tauro"):
	(mes==6)?printf("Tu signo es geminis"):
	(mes==7)?printf("Tu signo es cancer"):
	(mes==8)?printf("Tu signo es leo"):
	(mes==9)?printf("Tu signo es Virgo"):
	(mes==10)?printf("Tu signo es libra"):
	(mes==11)?printf("Tu signo es escorpion"):
	(mes==12)?printf("Tu signo es sagitario"):
	printf("No es valido");
	getch();
}
