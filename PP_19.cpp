#include <stdio.h>
#include <conio.h>
main()
{
      float n_p, n_t, n_a, p_p, p_t, p_a;
      printf("Introduce la nota practica: ");
      scanf("%f", &n_p);
      printf("Introduce el porcentaje de la nota practica: ");
      scanf("%f", &p_p);
      printf("Introduce la nota teorica: ");
      scanf("%f", &n_t);
      printf("Introduce el porcentaje de la nota teorica: ");
      scanf("%f", &p_t);
      printf("Introduce la nota en asistencia: ");
      scanf("%f", &n_a);
      printf("Introduce el porcentaje de asistencia: ");
      scanf("%f", &p_a);
      printf("La nota final del alumno es %f.", n_p*p_p/100 + n_t*p_t/100 + n_a*p_a/100);
      getch();
}
