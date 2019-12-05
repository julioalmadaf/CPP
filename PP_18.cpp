#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
      float a, b;
      char op;
      printf("Introduce la expresion a evaluar. Utiliza + para sumar, - para restar, * para multiplicar, # para sacar raiz cuadrada y $ para convertir a pesetas. Ejemplo:\n3 + 4\n0 # 25\n0 $ 3.45\n");
      scanf("%f %c %f", &a, &op, &b);
      op == '+' ? printf("%f", a+b):printf("");
      op == '-' ? printf("%f", a-b):printf("");
      op == '*' ? printf("%f", a*b):printf("");
      op == '#' ? printf("%f", sqrt(b)):printf("");
      op == '$' ? printf("%f pesetas", b * 9.78):printf("");
      getch();
}
