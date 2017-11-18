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

/* Fin funcion desglosar */

/* Funcion introducir numeros */

int introducir(int*,int);

int introducir(int *dir, int size){
  int result[9];
  if (size != sizeof(result)){
    return -1;
  }
  else{
    for (size=sizeof(result)/sizeof(result[0]);size>=0;size--){
      printf("Introduzca numero: ");
      scanf("%d",&result[size]);
    }
    memcpy(dir,result,sizeof(result));
    return 0;
  }
  return -2;
}

/* Fin funcion introducir numeros */

/* Funcion ordenar insercion */

void insercion(int *, int);

void insercion(int *array, int lng){
  int nums[9], aux=0;
  memcpy(nums,array,lng);


  for (int j=1;j<9;j++){
    for (int i=1 ;i <= j;i++){
      if (nums[j] > nums[j+i] ){
        aux = nums[i];
        nums[i] = nums[i+1];
        nums[i+1] = aux;
      }
    }
  }
  memcpy(array,nums,sizeof(nums));
}

/* Fin funcion ordenar insercion */
