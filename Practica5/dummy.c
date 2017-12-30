#include<stdio.h>
#include<stdlib.h>
#include"mem.h"

int main(){
  int elementos, i, *p;

  printf("\nIntroduzca el numero de elementos: ");
  scanf("%d", &elementos);

  p = (int *) malloc(elementos*sizeof(int));
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
    printf("\tDato %d",p[i]);
  printf("\n\n");

  free(p);
  /* MemoryManager_DumpMemoryLeaks(); */
  return 0;

}
