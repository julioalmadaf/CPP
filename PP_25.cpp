#include <stdio.h>
#include <conio.h>

main()
{
      float m1, m2;
      printf("Introduce la pendiente de la primera recta: ");
      scanf("%f", &m1);
      printf("Introduce la pendiente de la segunda recta: ");
      scanf("%f", &m2);
      m1 == m2 ? printf("Las rectas son paralelas."):printf("Las rectas son secantes.");
      getch();
}
