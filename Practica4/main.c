/*
  main.c
*/

#define MAX_CAD 20
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "diccionario.h"

typedef struct{
  char ingles[MAX_CAD];
  char espanyol[MAX_CAD];
} tpalabra;

int main () {
  tPalabra Diccionario[MAX_PAL];
  int num_pal=0;
  int opcion;

  printf ("PROGRAMA DICCIONARIO\n");
  printf ("====================\n");

	/* AÑADA AQUI EL CÓDIGO DE LA FUNCIÓN MAIN*/

  /* Ahora solo hay que anyadir las llamadas a funciones y tal */
  /* No se si funciona */

  do{
    opcion = menu();

    switch (opcion){
    case 1:{
      num_pal = anyadir_palabra(Diccionario,num_pal);
      continue;
    }
    case 2:{
      traducir_palabra(Diccionario,num_pal);
      continue;
    }
    case 3:{
      mostrar_diccionario(Diccionario,num_pal);
      continue;
    }
    case 4:{
      return 0;
    }
    }
  } while(1);
}
