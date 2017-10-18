#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int max, num, resto;
  printf ("Este programa imprime los numeros divisibles\n");
  printf ("por 7 menores que numero dado.\n\n");
  printf ("Introduzca el numero: ");
  scanf ("%d", &max);
  if (max <= 0)
    {
      printf ("El numero debe ser positivo!!\n");
    }
  else
    {
      for (num=1; num <= max; num++)
        {
          resto = num % 7;
          if (resto == 0)
            printf ("%d es divisible por 7\n", num);
        }
    }
  system ("pause");
  return 0;
}
