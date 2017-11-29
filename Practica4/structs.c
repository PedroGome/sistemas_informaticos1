#include<stdio.h>
#ifdef _WIN32
#include<string.h>
#else
#include<strings.h>
#include<string.h>
#endif

typedef struct ficha{
  char nombre[20];
  char DNI[10];
  float nota;
} tficha;

void mostrarFicha(tficha ficha1);
tficha leerFicha(void);

int main(){
  struct ficha persona1={"Ana","380517502J",6.5};

  persona1 = leerFicha();
  mostrarFicha(persona1);

  return 0;
}

tficha leerFicha(void){
  tficha persona1;

  printf("Nombre: ");
  fgets(persona1.nombre,20,stdin);
  persona1.nombre[strlen(persona1.nombre)-1] = '\0';

  printf("DNI: ");
  fgets(persona1.DNI,10,stdin);
  persona1.DNI[strlen(persona1.DNI)-1] = '\0';

  printf("Nota: ");
  scanf("%f",&persona1.nota);

  return persona1;
}

void mostrarFicha(tficha ficha1){
  printf("Nombre: %s\n",ficha1.nombre);
  printf("DNI: %s\n",ficha1.DNI);
  printf("Nota: %1f\n",ficha1.nota);
}
