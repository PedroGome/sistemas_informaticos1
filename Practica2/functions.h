// DECLARACIONES DE FUNCIONES

int menu(); // declaración de la función "menu"

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
          printf("Opción no válida\n");
          /* printf("Opci%cn no v%clida\n", 0xA2, 0xA0); */
          system("pause"); // detenerse hasta pulsar una tecla
        }
    }
  while (op < 1 || op > 10); // condición
  return op;
}

int desplazar(int n, int nPos){
  int nDesplazado;

  return nDesplazado;
}

