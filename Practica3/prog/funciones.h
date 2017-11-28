#define _CRT_SECURE_NO_DEPRECATE
#ifdef _WIN32
#include<string.h>
#else
#include<strings.h>
#include<string.h>
#endif

#include<stdio.h>
#include<stdlib.h>

/* Funcion exponente */
double power(int, int);

double power(int bas, int exponent){
  double total=0, base=bas;

  if (exponent < 0){
    int i=0;
    total = base;
    for(i=exponent; i < 0; i++){
      total *= base;
    }
    total = 1 / total;
  }
  else{
    if(exponent == 0){
      total = 1;
    }
    else{
      int i=0;
      total = base;
      for(i=exponent; i > 1; i--){
        total *= base;
      }
    }
  }
  return total;
}
/* Fin funcion exponente */

/* Funcion factorial */
double factorial(int);

double factorial(int num){
  long result;
  result = num;
  if (num == 0){
    result = 1;
  }
  else{
    if (num<0){
      return -1;
    }
    else{
      num--;
      for( ;num>1;num--){
        result *= num;
      }
    }
  }
  return result;
}
/* Fin funcion factorial */

/* Funcion desglosar */

void desglosar(int*, int);

void desglosar(int *position, int total){
  int DESGLOSE[9], divisa[9]={500,200,100,50,20,10,5,2,1}, inter;
  inter = total;

  for (int i=0;i<9;i++){
    int result=total;
    result = inter / divisa[i];
    inter %= divisa[i];
    DESGLOSE[i] = result;
  }
  memcpy(position,DESGLOSE,sizeof(DESGLOSE));
}

/* Fin funcion desglosar */

/* Funcion introducir numeros */

int introducir(int*,int);

int introducir(int *dir, int size){
  int result[9];
  if (size != sizeof(result)){
    return -1;
  }
  else{
    for (size=sizeof(result)/sizeof(result[0]);size>=0;size--){
      printf("Introduzca numero: ");
      scanf("%d",&result[size]);
    }
    memcpy(dir,result,sizeof(result));
    return 0;
  }
  return -2;
}

/* Fin funcion introducir numeros */

/* Funcion ordenar insercion */

void insercion(int *, int);

void insercion(int *array, int lng){
  int nums[9], less[9];
  memcpy(nums,array,lng);

  nums[0]=34;
  nums[1]=3;
  nums[2]=4;
  nums[3]=98;
  nums[4]=1;
  nums[5]=11;
  nums[6]=2;
  nums[7]=23;
  nums[8]=-1;

  less[0]=nums[0];

  for(int a=0;a<9;a++){
    if(less[a] < nums[a]){
      less[a+1] = nums[a];
    }
    else{
      if(less[a] == nums[a]){
        less[a+1] = nums[a];
      }
      else{
        int b=a;
        for( ;a>0;a--){
          if(less[a] > nums[b]){
            for(int c=b;c>0;c--){
              less[c+1]=less[c];
            }
            less[a] = nums[b];
            break;
          }
        }
      }
    }
  }
}

/* Fin funcion ordenar insercion */

/* Funcion busqueda binaria */

int binsrch(double n, double *, int);

int binsrch(double n, double *list, int sizl){

  double A[9];
  int i=4;
  /************************

El contenido de A es para depuracion

   ***********************/
  A[0]=-111.1;
  A[1]=-3;
  A[2]=4;
  A[3]=8;
  A[4]=11.1;
  A[5]=11.9;
  A[6]=200;
  A[7]=200.2;
  A[8]=411;

  /* introducir(A,sizeof(A)); */
  /* memcpy(A,list,sizl); */
  /* insercion(A,sizeof(A)); */

  if (A[8] >= n && A[0] <= n){
    int min=0,max=1;

    while(1)
      {
        if(A[i] > n){
          max = i;
          i = max - (max-min)/2;
        }
        if(A[i] < n){
          min = i;
          i = min + (max-min)/2;
        }
        if(A[i] == n){
          return 0;
        }
        if((max-min) == 1){
          if(A[max] == n) return 0;
          if(A[min] == n) return 0;
          return 1;
        }
      }
  }
  return -1;
}

/* Fin funcion binsrch */
