#include <stdio.h>
#include <conio.h>

main()
{
      float a = 1, b = 0, sol;
      printf("Introduce tu ecuacion igualada a cero, y con el término con x al principio. Por ejemplo: -2x+1=0, 3x=0, 1x-2=0\n");
      scanf("%fx%f=0", &a, &b);
      sol = -b/a;
      printf("La solucion de tu ecuacion es x=%f.", sol);
      getch();     
}
