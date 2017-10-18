#include<stdio.h>

int main(){
  int i=0;
  int number;

    printf("Select numbers to be printed: ");
    scanf("%d", &number);

  while (i <= number){
    printf("%i\n",i);
    i=i+1;
  }

  return 0;
}
