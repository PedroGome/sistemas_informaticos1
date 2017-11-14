#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
  int i, a=1, n=0, c=0;
  if (argc != 1){
   i = atoi(argv[1]);
  while ( a <= i ){
    int x;
    n = a;
    c = 0;
    x = (i - n) ;
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
  else{
    printf("No arguments supplied\n");
  }
}
