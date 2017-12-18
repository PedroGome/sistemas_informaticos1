/*
  diccionario.h
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../funcs.h"

#define MAX_PAL 100
#define MAX_CAD 20

typedef struct {
  char ingles[MAX_CAD];
  char espanyol[MAX_CAD];
} tPalabra;

int menu();
void LeeCadena(char cadena[], int max);
int anyadir_palabra (tPalabra Dicc[], int num);
void traducir_palabra (tPalabra Dicc[], int num);
void mostrar_diccionario (tPalabra Dicc[], int num);

int anyadir_palabra (tPalabra *Dicc, int num){
  if (num >= MAX_PAL){
    printf("Diccionario lleno\n");

    pause();

    return num;
  }

  printf("Introducir espanyol: ");
  LeeCadena(Dicc[num+1].espanyol, MAX_CAD);
  printf("Se ha introducido: %s",Dicc[num+1].espanyol);

  printf("\nIntroducir ingles: ");
  LeeCadena(Dicc[num+1].ingles, MAX_CAD);
  printf("Se ha introducido: %s",Dicc[num+1].ingles);

  pause();

  return num+1;
}

void traducir_palabra (tPalabra Dicc[], int num){
  char palabradedios[MAX_CAD];
  LeeCadena(palabradedios, MAX_CAD);

  for(int i=0; i<= num; i++)
    if (!strcmp(palabradedios, Dicc[i].espanyol))
      printf("Traduccion de %s es %s", palabradedios, Dicc[i].ingles);;

  pause();
}

void mostrar_diccionario (tPalabra Dicc[], int num){
  printf("\tEspanyol\tIngles\n");
  printf("\t--------\t------\n");
  printf("\n");

  for (int i=0; i<=num; i++)
    printf("\t%s\t%s\n",Dicc[i].espanyol,Dicc[i].ingles);

  pause();
}
