#include<stdio.h>

float iva(float, float);
int main(){
  float p, pp;
  printf("Precio: ");
  scanf("%f",&p);
  printf("Porcentaje (%%): ");
  scanf("%f",&pp);

  printf("\nPrecio IVA: %g\n",iva(p, pp));


  return 0;
}

float iva(float p, float pp){
  p = (p * pp)/100;
  return p;
}
