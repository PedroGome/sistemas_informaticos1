#include<stdio.h>

int main(){
  float precio = -9;
  int porcen = 120;
  int key = 1;

  while(key==1){
    do{
      printf("introduce precio: ");
      scanf("%f",&precio);
      printf("error\n");
    }

    while (precio < 0);

    precio = precio - (precio * (porcen / 100.0));

    do{
      printf("error\n");
      printf("\nIntroduce porcentaje: ");
      scanf("%d",&porcen);
    }

    while (porcen > 100 || porcen < 0);

    printf("Precio final = %g\n 1 para continuar",precio);
    scanf("%d", &key);
    printf("%d",pewne);
  }



  return 0;
}

