/*
  diccionario.h
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PAL 100
#define MAX_CAD 20

typedef struct
{
  char ingles[MAX_CAD];
  char espanyol[MAX_CAD];
} tPalabra;

int menu();
void LeeCadena(char cadena[], int max);
int anyadir_palabra (tPalabra Dicc[], int num);
void traducir_palabra (tPalabra Dicc[], int num);
void mostrar_diccionario (tPalabra Dicc[], int num);
