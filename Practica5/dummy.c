#include<stdio.h>
#include<stdlib.h>
#include"MemoryManager.h"

int main(){
  int size, elementos, i, *p;

  printf("\nIntroduzca el numero de elementos: ");
  scanf("%d", &elementos);

  size = elementos * sizeof(int);

  p = (int *) malloc(size);
  if (p==NULL){
    printf("Error al asignar memoria");
    return -1;
  }

  printf("\nIntroduzca los datos del array\n\n");
  for(i=0; i<elementos; i++){
    printf("Dato %d: ", i+1);
    scanf("%d", &p[i]);
  }

  printf("\nLos datos almacenados en el array son: \n");
  for(i=0; i<elementos; i++)
    printf("\tDato %d: %d",i+1, p[i]);
  printf("\n\n");

  free(p);
  MemoryManager_DumpMemoryLeaks();
  return 0;
}
