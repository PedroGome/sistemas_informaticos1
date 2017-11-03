#include<stdio.h>

int main(){
  unsigned char car1;
  char car2;

  printf("Constantes y variables de tipo caracter\n");

  car1 = 0x35 + 96 - ' ';                         /* (a) */
  car2 = 'z';                                     /* (b) */

  printf("\nEjemplo 1:\n");                       /* (c) */
  printf("Caracteres:\t%c\t%c\n",car1,car2);
  printf("Valores:\t%d\t%d\n",car1,car2);

  car1 = 0x9C;
  car2 = car1;

  printf("\nEjemplo 2:\n");
  printf("Caracteres:\t%c\t%c\n",car1,car2);      /* (d) */
  printf("Valores:\t%d\t%d\n",car1,car2);         /* (e) */

  return 0;
}
