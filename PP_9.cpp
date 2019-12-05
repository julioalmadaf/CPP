#include <stdio.h>
#include <conio.h>

main()
{
	int a_nac, a_dob, edad;
	printf("Introduce tu edad\n");
	scanf("%d", &edad);
	a_nac = 2014 - edad;
	a_dob = 2014 + edad;
	printf("Naciste en %d y doblaras tu edad actual en %d.", a_nac, a_dob);
	getch();	
}
