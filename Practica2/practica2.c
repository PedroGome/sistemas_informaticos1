// practica2.c

/* #define _CRT_SECURE_NO_DEPRECATE */
#include <stdio.h>
#include <stdlib.h>

// DECLARACIONES DE FUNCIONES

int menu();                                  // declaración de la función "menu"
int desplazar( int , int );                  // declaración de desplazar
int parImpar (int);
void operacionesLogicasBits();
int ponerACeroBit( int, int );
long factorial(int);
int numeroBits(int);
int cambiarBits(int, int, int);
void intercambiar(double * , double *);
double mediaAritmerica(double, double, double, double);

void pause();
void clear();

/******** MAIN ********/
int main (){
/******** DEFINICIONES DE VARIABLES *********/
  int opcion;                                // opción elegida del menú

  printf ("PRÁCTICA 2\n");
  printf ("==========\n");

  opcion = menu();                           // llama/invoca a la función "menu"

  while (opcion != 10){                      // sentencia repetitiva
    switch (opcion)                          // sentencia condicional
      {
      case 1:{
        printf("Ejercicio 1: desplazar\n");  // llama a la función "printf"
        int n;
        int nPos;
        printf("Introduzca numero a desplazar: ");
        scanf("%d",&n);
        printf("\n");
        printf("Introduzca desplazamiento: ");
        scanf("%d",&nPos);
        printf("Numero despues del desplazamiento %d\n",desplazar( n , nPos ));// Llamar a la función "desplazar"
        break;}
      case 2:{
        printf("Ejercicio 2: par o impar\n");
        int num;
        printf("Introduzca numero para diferenciar entre par o impar: ");
        scanf("%d",&num);
        printf("\n");
        // Llamar a la función "parImpar"
        if ( 0 == parImpar(num)){
          printf("Numero par\n");
        }
        else{
          printf("Numero impar\n");
        }
        break;}
      case 3:{
        printf("Ejercicio 3: operaciones lógicas y a nivel de bits\n");
        // Llamar a la función "operacionesLogicasBits"
        operacionesLogicasBits();
        break;}
      case 4:{
        printf("Ejercicio 4: poner a cero un bit\n");
        // Llamar a la función "ponerACeroBit"
        int n;
        int nPos;
        printf("Introduzca el valor decimal de 8 bits de el numero a cambiar: ");
        scanf("%d",&n);
        printf("\n");
        printf("Introduzca el valor de la posicion del bit a cambiar a 0: ");
        scanf("%d",&nPos);
        nPos --;
        printf("\nEl nuevo valor es %d",ponerACeroBit(n,nPos));
        printf("\n");
        break;
      }
      case 5:{
        int n=0;
        long res;
        printf("Ejercicio 5: factorial\n");
        printf("Introduzca numero para encontrar su factorial: ");
        scanf("%d",&n);
        res = factorial(n);
        if(res == -1){
          printf("Factorial no puede ser computado");
        }
        else{
          printf("El resultado del factorial es: %ld",res);
        }
        // Llamar a la función "factorial"
        printf("\n");
        break;}
      case 6:{
        int n=0;
        printf("Ejercicio 6: numero de bits\n");
        printf("\n Introduzca un numero entero positivo: ");
        scanf("%d",&n);
        // Llamar a la función "numeroBits"
        printf("El numero de bits minimo para representar %d es: %d",n, numeroBits(n) );
        printf("\n");
        break;}
      case 7:{
        int o,n,p;
        do{
        printf("Ejercicio 7: cambiar bits\n");
        printf("\nIntroduzca un numero entero a cambiar: ");
        scanf("%d",&o);
        if ( o < 0 ){
          printf("\nNumero invalido\n");
        }
        }
        while ( o < 0 );
        printf("\nIntroduzca Posicion del bit inicial a invertir: ");
        scanf("%d",&p);
        printf("\nNumero de bits a invertir: ");
        scanf("%d",&n);
        // Llamar a la función "cambiarBits"
        o = cambiarBits(o,n,p);
        if( o == -1){
          printf("\nHa ocurrido un error");
        }
        else{
          printf("El valor de el nuevo numero es: %d",o);
        }
        printf("\n");
        break;}
      case 8:{
        printf("Ejercicio 8: intercambiar\n");
        // Llamar a la función "intercambiar"
        double a = 0;
        double b = 0;
        printf("Primer valor: ");
        scanf("%lf",&a);
        printf("Segundo valor: ");
        scanf("%lf",&b);
        intercambiar(&a,&b);
        printf("Primer Valor ahora es:  %g",a);
        printf("\nSegundo Valor ahora es: %g",b);
        printf("\n");
        break;}
      case 9:{
        printf("Ejercicio 9: media aritmetica\n");
        // Llamar a la función "mediaAritmetica"
        double a=0 , b=0 , c=0 , d=0;
        printf("Introduzca Numero 1: ");
        scanf("%lf",&a);
        printf("Introduzca Numero 2: ");
        scanf("%lf",&b);
        printf("Introduzca Numero 3: ");
        scanf("%lf",&c);
        printf("Introduzca Numero 4: ");
        scanf("%lf",&d);

        a = mediaAritmerica( a , b , c , d);

        printf("La media de los cuatro numeros es: %g",a);
        printf("\n");
        break;}
      default:
        printf ("ERROR: Opcion incorrecta.\n");
        break;
      }
    pause();
    opcion = menu(); // llamar a la función "menu"
  }
}
// DEFINICIONES DE FUNCIONES
int menu() // definición de la función "menu"
{
  int op;
  do // sentencia repetitiva
    {
      clear();
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
          pause();
        }
    }
  while (op < 1 || op > 10); // condición
  return op;
}

int desplazar(int n, int nPos){
  int nDesplazado;
  nDesplazado = nPos >> n;
  return nDesplazado;
}

int parImpar(int num){
  num = num % 2;
  if ( num != 0 ){
    return 1;
  }
  else{
    return 0;
  }
}

void operacionesLogicasBits(){
  int a=8, b=0, c=15, d=93, e, r1, r2, r3, r4, r5, r6;

  r1 = a && b || c && !d;
  r2 = !a || b && c || d;
  r3 = a < b || !c > d;
  r4 = a + b > d-c;
  r5 = a && b && !c || !(a && b) && c;

  printf("\nvalores en hexadecimal de todos los numeros \n\tr1 = %x \n\tr2 = %x \n\tr3 = %x \n\tr4 = %x \n\tr5 = %x",r1,r2,r3,r4,r5);
  printf("\n");

  a = 0x12; b=0x56; c=0x9a; d=0x0f; e=0360;

  r1 = a & b | c;
  r2 = c & 0177;
  r3 = ~a | b ^ c;
  r4 = e & c;
  r5 = r4 & ~077;
  r6 = (a & d) << 4 | (a & e) >> 4;
  printf("\nvalores en hexadecimal de todos los numeros %x %x %x %x %x %x",r1,r2,r3,r4,r5,r6);
  printf("\n");
}

int ponerACeroBit( int n , int nPos){
  n = n & (~(1 << nPos));
  return n;
}

long factorial(int n){
  long factorial = 1;
  if (n < 0 || n > 16) return -1;
  else{
    factorial = n;
    while(n != 1){
      n--;
      factorial *= n;
    }
  }
  return factorial;
}

int numeroBits(int n){
  int dosElevadoN = 2, nbits = 1; // 2^1 = 2
  int exponent = 1;
  while(dosElevadoN <= n){
    dosElevadoN = 2;
    while(exponent !=0){
      dosElevadoN *= 2;
      exponent --;
    }
    nbits ++;
    exponent = nbits;
  }
  return nbits;
}

int cambiarBits(int o, int n, int p){
  if (o < (p+n)){
    return -1;
  }
  else{
    int mask = 0;
    mask = ~(~mask << n) << p;
    o = o ^ mask;
    return o;
  }
}

void intercambiar(double *a, double *b){
  /* Aqui hay que usar los punteros, asignar el contenido de *a a c, el contenido de *b a &a y el contenido de c a &b */
  double c = *a;
  *a = *b;
  *b = c;
}

double mediaAritmerica(double a, double b, double c, double d){
  a = (a+b+c+d)/4;
  return a;
}

/* Pause and clear functions */
void pause(){
  system("read -n1 -r -p \"Press any key to continue...\" key"); // Comenta esta linea si usas windows
  //    system("pause"); // Quita el comentario si estas en windows

}

void clear(){
  system("clear"); //Comenta esta line si usas windows
  //      system("cls"); // Quita el comentario si usas windows

}
