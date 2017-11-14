#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include"funciones.h"

void menu(int*);

int main(){
  int option;
  printf("Seleccione opción\n");
  menu(&option);
  switch (option){
  case 1:{
    int base=0, exponent=0;
    printf("Introduzca Base: ");
    scanf("%d",&base);
    printf("Introduzca Exponente: ");
    scanf("%d",&exponent);

    printf("Valor del numero: %g\n",power(base,exponent));
  }
  case 2:{
    int fac=0;
    double result=0;
    printf("Introduzca factorial: ");
    scanf("%d",&fac);

    result = factorial(fac);
    if (result == -1){
      printf("Not defined yet, sorry\n");
    }
    else{
      printf("Valor del numero: %g\n", result);
    }
  }
  case 3:{
  }
  }
}

void menu(int *opt){
  printf("Funciones:\n1\tExponente\n2\tFactorial\n3\tDesglosar\n");
  printf("Introduzca funcion: ");

  scanf("%d",opt);
}
