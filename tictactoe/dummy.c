#include<stdio.h>
#include"comprobar.h"

int main(){
  char b[3][3];
  int z;

  b[0][0]='x';
  b[1][1]='x';
  b[2][2]='x';

  z = finished(b,'x');

  printf("result: %d\n",z);

  return 0;
}
