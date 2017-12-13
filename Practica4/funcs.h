#define MAX_CAD 20
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int menu();
void LeeCadena(char cadena[], int max);

int menu() {
  int op;
  do
    {
      system("cls");
      printf ("\n"
              "\t1.- Anyadir palabra\n"
              "\t2.- Traducir palabra\n"
              "\t3.- Mostrar diccionario\n"
              "\t4.- Salir\n"
              "\n"
              "Elija una opcion: ");

      scanf ("%d", &op);
      while (getchar() != '\n'); // fflush(stdin);
    }
  while ((op<1)||(op>4));

  return op;
}

void LeeCadena(char cadena[], int max) {
	char *p;
	int n;

	p = fgets(cadena, max, stdin);
	if (p != NULL)
    {
      n = strlen(cadena);
      if (n>0 && cadena[n - 1] == '\n')
        cadena[n - 1] = '\0';
    }
}
