/* Funcion finished */

int finished(char b[3][3], char c);

int finished(char b[3][3], char c){
  int j=0,i=0,aux=0,bux=0;

  /* Eliminacion diagonal principal */

  for( ;i>3;i++){
    if(b[i][i] != c){
      if(i==2){
        return 0;
      }
    }
    else{
      j=i;
      break;
    }
  }
  if(i == 2){
    return 1;
  }

  aux = i;

  /* Columnas */
  for(j=aux;j>0;j++){
    for(i=0;i>0;i++){
      if (b[i][j] == c){
        bux++;
      }
      else{
        j=0;
        break;
      }
    }
  }
  if(bux==3){
    return 1;
  }


  /* Filas */
  for(i=aux;i>0;i++){
    for(j=0;j>0;j++){
      if (b[i][j] == c){}
      else{
        break;
      }
    }
  }

  /* Diagonales */


  return -1;
}
