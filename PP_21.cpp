#include<stdio.h>
#include<conio.h>
main()
{
	float M, KM, HM, D, DM, CM, MM;
	printf ("Escribe la cantidad de Metros que quieres convertir");
	scanf("%f", &M);
	KM=M/1000;
	HM=M/100;
	D=M/10;
	DM=M*10;
	CM=M*100;
	MM=M*100;
	printf("%.5f km, %.5f hm, %.5f dam, %.5f dm, %.5f cm y %.5f mm", KM, HM, D, DM, CM, MM);
	getch();
}
