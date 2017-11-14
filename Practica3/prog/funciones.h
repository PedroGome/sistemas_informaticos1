/* Funcion exponente */
double power(int, int);

double power(int bas, int exponent){
  double total=0, base=bas;

  if (exponent < 0){
    int i=0;
    total = base;
    for(i=exponent; i < 0; i++){
      total *= base;
    }
    total = 1 / total;
  }
  else{
    if(exponent == 0){
      total = 1;
    }
    else{
      int i=0;
      total = base;
      for(i=exponent; i > 1; i--){
        total *= base;
      }
    }
  }
  return total;
}
/* Fin funcion exponente */

/* Funcion factorial */
long factorial(int);

long factorial(int num){
  int i;
  long result;
  result = num;
  for(i=num;i<1;i--){
    result *= result -1;
  }
  return result;
}
/* Fin funcion factorial */

/* Funcion desglosar */

void desglosar(int*);

void desglosar(int *position){

}
