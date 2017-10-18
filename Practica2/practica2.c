// practica2.c

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

// DECLARACIONES DE FUNCIONES

int menu(); // declaración de la función "menu"

int main (){

  // DEFINICIONES DE VARIABLES

  int opcion; // opción elegida del menú

  printf ("PRÁCTICA 2\n");
  printf ("==========\n");

  opcion = menu(); // llama/invoca a la función "menu"

  while (opcion != 10){ // sentencia repetitiva
    switch (opcion) // sentencia condicional
      {
      case 1:
        printf("Ejercicio 1: desplazar\n"); // llama a la función "printf"
        // Llamar a la función "desplazar"
        break;
      case 2:
        printf("Ejercicio 2: par o impar\n");
        // Llamar a la función "parImpar"
        break;
      case 3:
        printf("Ejercicio 3: operaciones lógicas y a nivel de bits\n");
        // Llamar a la función "operacionesLogicasBits"
        break;
      case 4:
        printf("Ejercicio 4: poner a cero un bit\n");
        // Llamar a la función "ponerACeroBit"
        break;
      case 5:
        printf("Ejercicio 5: factorial\n");
        // Llamar a la función "factorial"
        break;
      case 6:
        printf("Ejercicio 6: numero de bits\n");
        // Llamar a la función "numeroBits"
        break;
      case 7:
        printf("Ejercicio 7: cambiar bits\n");
        // Llamar a la función "cambiarBits"
        break;
      case 8:
        printf("Ejercicio 8: intercambiar\n");
        // Llamar a la función "intercambiar"
        break;
      case 9:
        printf("Ejercicio 9: media aritmetica\n");
        // Llamar a la función "mediaAritmetica"
        break;
      default:
        printf ("ERROR: Opcion incorrecta.\n");
        break;
      }
    system("pause"); // llamar a la función "system"
    opcion = menu(); // llamar a la función "menu"
  }
}
// DEFINICIONES DE FUNCIONES
int menu() // definición de la función "menu"
{
  int op;
  do // sentencia repetitiva
    {
      system("cls");
      printf ("\n"
              "\t01.- Ejercicio 1\n"
              "\t02.- Ejercicio 2\n"
              "\t03.- Ejercicio 3\n"
              "\t04.- Ejercicio 4\n"
              "\t05.- Ejercicio 5\n"
              "\t06.- Ejercicio 6\n"
              "\t07.- Ejercicio 7\n"
              "\t08.- Ejercicio 8\n"
              "\t09.- Ejercicio 9\n"
              "\t10.- Salir\n"
              "\n"
              "Elija una opcion: ");
      scanf ("%d", &op); // llamar a la función "scanf"
      if (op < 1 || op > 10) // sentencia condicional
        {
          // printf("Opción no válida\n");
          printf("Opci%cn no v%clida\n", 0xA2, 0xA0);
          system("pause"); // detenerse hasta pulsar una tecla
        }
    }
  while (op < 1 || op > 10); // condición
  return op;
}
