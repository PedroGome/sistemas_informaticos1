#define _CRT_SECURE_NO_DEPRECATE
#ifdef _WIN32
#include<string.h>
#else
#include<strings.h>
#include<string.h>
#endif

#include<stdio.h>
#include<stdlib.h>
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
    break;
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
    break;
  }
  case 3:{
    int A[9], divisa[9]={500,200,100,50,20,10,5,2,1};
    int total=0;
    printf("Introduzca numero a desglosar: ");
    scanf("%d",&total);
    desglosar(A,total);
    for(int i=0;i<9;i++){
      if (A[i] == 0){
        continue;
      }
      else{
        printf("%d de %d euros\n",A[i],divisa[i]);
      }
    }
    printf("\n");
    break;
  }
  case 4:{
    double A[9];
    /* introducir(A,sizeof(A)); */
    insercion(A,sizeof(A));
    for(int i=0;i<9;i++){
      printf("Valor de A[%d]: %g\n",i,A[i]);
    }
    break;
  }
  case 5:{
    double x=23,A[9];
    int ret;
    printf("Introduzca numero a buscar: ");
    scanf("%lf",&x);
    introducir(A,sizeof(A));
    insercion(A,sizeof(A));
    ret = binsrch(x,A,sizeof(A),0,8);
    if(ret == 0){
      printf("Encontrado!!!\n");
    }
    if(ret == 1){
      printf("No encontrado :'(\n");
    }
  }
  }
}

void menu(int *opt){
  printf("Funciones:\n1\tExponente\n2\tFactorial\n3\tDesglosar\n4\tOrden\n5\tBusqueda binaria\n");
  printf("Introduzca funcion: ");

  scanf("%d",opt);
}
