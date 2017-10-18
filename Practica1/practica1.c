#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

#define SEG_POR_MINUTO 60
#define SEG_POR_HORA   3600
#define SEG_POR_DIA    86400

int main(){

  int seg;
  float min, horas, dias;

  printf("Este programa le permite pasar de segundos a minutos,\n");
  printf("horas o dias\n\n");
  printf("Escriba cuantos segundos quiere convertir y pulse ENTER: ");
  scanf("%d", &seg);

  if (seg < 0){
      printf("Error! El numero de segundos debe ser positivo.\n");
      printf("Saliendo del programa.\n");
  }
  else{
    min = (float)seg / SEG_POR_MINUTO;
    horas = (float)seg / SEG_POR_HORA;
    dias = (float)seg / SEG_POR_DIA;
    printf("%d segundos equivalen a %.3f minutos.\n", seg, min);
    printf("%d segundos equivalen a %.3f horas.\n", seg, horas);
    printf("%d segundos equivalen a %.3f dias.\n", seg, dias);
  }

  system("pause");
  return 0;
}
