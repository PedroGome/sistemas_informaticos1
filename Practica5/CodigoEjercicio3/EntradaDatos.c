#include "cabecera.h"

void LeeCadena(char cadena[], char *p_mensaje, int max)
{
	 char *p;
	 int n;
   printf("Introduzca %s\n",p_mensaje);
   fflush(stdin);
	 p = fgets(cadena, max, stdin);
	 if (p != NULL)
	 {
		  n = strlen(cadena);
		  if (n>0 && cadena[n - 1] == '\n')
			   cadena[n - 1] = '\0';
	 }
}

