#include"./CodigoEjercicio3/cabecera.h"
#include"funciones.h"

int main(){
  int elementos, i, *p;

  printf("introduzca el numero de elementos\n");
  scanf("%d", &elementos);

  p = (int *) malloc(elementos*sizeof(int));
  if (p==NULL){
    printf("Error al asignar memoria");
    return -1;
  }

  printf("\n'nIntroduzca los datos del array\n\n");
  for(i=0; i<elementos; i++){
    printf("\nDato %d", i+1);
    scanf("%d", &p[i]);
  }

  printf("Los datos almacenados en el array son: \n\n");
  for(i=0; i<elementos; i++)
    printf("\tDato %d",p[i]);
  printf("\n\n");

  free(p);
  MemoryManager_DumpMemoryLeaks();
  pause();
  return 0;
}
