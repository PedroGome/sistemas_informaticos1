#include<stdio.h>

int main(){
  int i, a=1, n=0, c=0;
  printf("Enter number of lines: ");
  scanf("%d",&i);
  while ( a <= i ){
    int x;
    n = a;
    c = 0;
    x = (i - n) / 2;
    do{
      printf(" ");
      c++;
    }
    while ( c <= x );
    do{
      printf("*");
      n--;
    }
    while ( n > 0 );
    printf(" %d\n",a);
    a++;
  }
}
