#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct esl{
  char nom[20];
  int num;
  struct esl *next;
} s;

void strread(char*,int);

s leeAlv1();
void leeAlv2(s*);

void rdalumv1(s clase[],int numx);
void rdalumv2(s clase[],int numx);

void showAL(s info);
int showALs(s clase[], int numr);

int main(){
  s clase[100];

  rdalumv1(clase, 3);

  showALs(clase, 3);

  return 0;
}

void strread(char str[], int max){
  char *p;
  int n;


  p = fgets(str,max,stdin);
  if (p != NULL){
    n = strlen(str);
    if  (n>0 && str[n-1] == '\n') str[n-1] = '\0';
  }
}

s leeAlv1(){
  s local;
  printf("Nombre: ");
  strread(local.nom, 20);
  printf("Numero de matricula: ");
  scanf("%d",&local.num);
  while( getchar() != '\n');
  return local;
}

void leeAlv2(s*alum){
  printf("Nombre: ");
  strread(alum->nom,20);
  printf("Numero de matricula: ");
  scanf("%d",&alum->num);
  while( getchar() != '\n');
}

void rdalumv1(s clase[],int numx){
  int i;
  for(i=0; i<numx; i++)
    clase[i] = leeAlv1();
}

void rdalumv2(s clase[],int numx){
  int i;
  for(i=0; i<numx; i++)
    leeAlv2(&clase[i]);
}

void showAL(s info){
  printf("Nombre: %s\n",info.nom);
  printf("Num matricula: %d\n",info.num);
}

int showALs(s clase[], int numx){
  int i;

  for(i=0; i<numx; i++)
    showAL(clase[i]);
  return i;
}
