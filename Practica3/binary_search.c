#include<stdio.h>

int main(){
  int min=0, max=0, current=0, decision=0, answ=0;

  printf("Introduce Maximo: ");
  scanf("%d",&max);

  do{
    current = (min + max)/2;
    printf("Es tu numero: %d, 1 more / 2 less / 3 yes: ", current);
    scanf("%d",&answ);

    switch (answ) {
    case 1:{
      min = current;
      continue;
    }
    case 2:{
      max = current;
      continue;
    }
    case 3:{
      printf("Adivinado\n");
      break;
    }
    }
    printf("To exit press 1: ");
    scanf("%d",&decision);
  }
  while(decision != 1 );

  return 0;
}
