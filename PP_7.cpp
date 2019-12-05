#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
{
      float Pa = 101325, atm = 1 / Pa, conversion;
      char unidades[4];
      printf("Escribe el valor de la presion a convertir con sus unidades. Ejemplo:\n2.5 Pa\n9000000 atm\n");
      scanf("%f %s", &conversion, &unidades);
      strcmp(unidades, "atm")==0?printf("La presion que introduciste en pascales es %f.", conversion * Pa):printf("");
      strcmp(unidades, "Pa")==0?printf("La presion que introduciste en atmosferas es %f.", conversion * atm):printf("");
      getch();    
}
