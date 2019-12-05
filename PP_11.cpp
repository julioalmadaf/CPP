#include <stdio.h>
#include <conio.h>

main()
{
      float x1, y1, x2, y2, m;
      printf("Introduce los dos puntos por los que pasa la recta seguidos de un espacio. Ejemplo: (3, -4) (-8, -3.5)\n");
      scanf("(%f, %f) (%f, %f)", &x1, &y1, &x2, &y2);
      m = (y2 - y1) / (x2 - x1);
      printf("La pendiente de la recta es %f y su ecuacion es y=%fx%+f.", m, m, -m*x1 + y1);
      getch();
}
