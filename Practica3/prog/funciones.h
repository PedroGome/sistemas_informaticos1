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
double factorial(int);

double factorial(int num){
  long result;
  result = num;
  if (num == 0){
    result = 1;
  }
  else{
    if (num<0){
      return -1;
    }
    else{
      num--;
      for( ;num>1;num--){
        result *= num;
      }
    }
  }
  return result;
}
/* Fin funcion factorial */

/* Funcion desglosar */

void desglosar(int*, int);

void desglosar(int *position, int total){
  int DESGLOSE[9], divisa[9]={500,200,100,50,20,10,5,2,1}, inter;
  inter = total;

  for (int i=0;i<9;i++){
    int result=total;
    result = inter / divisa[i];
    inter %= divisa[i];
    DESGLOSE[i] = result;
  }
  memcpy(position,DESGLOSE,sizeof(DESGLOSE));
}
