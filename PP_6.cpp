#include <stdio.h>
#include <conio.h>

main()
{
      int cant1, cant2, cant3, cant4, cant5, cant6, cant7;
      float total = 0;
      printf("El litro de leche cuesta $30.00. ¿Cuantos litros de leche quieres? ");
      scanf("%d", &cant1);
      total += cant1 * 30.00;
      printf("La lata de soda cuesta $8.00. ¿Cuantas latas de soda quieres? ");
      scanf("%d", &cant2);
      total += cant2 * 8.00;
      printf("La piña grande cuesta $15.00. ¿Cuantas piñas quieres? ");
      scanf("%d", &cant3);
      total += cant3 * 15.00;
      printf("El paquete de chocorroles cuesta $11.90. ¿Cuantos paquetes de chocorroles quieres? ");
      scanf("%d", &cant4);
      total += cant4 * 11.90;
      printf("La pizza congelada está en oferta, cuesta $71.90. ¿Cuantas pizzas quieres? ");
      scanf("%d", &cant5);
      total += cant5 * 71.90;
      printf("La docena de huevos cuesta $24.50. ¿Cuantas docenas de huevo quieres? ");
      scanf("%d", &cant6);
      total += cant6 * 24.50;
      printf("Los cacahuates japoneses cuestan $14.90. ¿Cuantas bolsas de cacahuates quieres? ");
      scanf("%d", &cant7);
      total += cant7 * 14.90;
      printf("Un kilo de tortillas de maiz cuesta $12.90. ¿Cuantos kilos de tortillas quieres? ");
      scanf("%d", &cant8);
      total += cant8 * 12.90;
}
