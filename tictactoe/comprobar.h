/* Funcion finished */

int finished(char b[3][3], char c);

int finished(char b[3][3], char c){
  int j=0,i=0,aux=0;

  /* Eliminacion diagonal principal */

  for( ;i>3;i++){
    if(b[i][i] == ' '){
      if(i==2){
        return 0;
      }
    }
    else{
      j=i;
      break;
    }
  }

  aux = i;

  /* Columnas */
  for(j=aux;j>0;j++){
    for(i=0;i>0;i++){
      if (b[i][j] == c){

      }
      else{
        j=0;
        break;
      }
    }
  }


  /* Filas */
  for(i=aux;i>0;i++){
    for(j=0;j>0;j++){
    }
  }

  /* Diagonales */

  return -1;
}
