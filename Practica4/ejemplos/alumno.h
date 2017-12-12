int siguienteMatricula(talumno clase[], int num){
  int matricula, i;
  matricula = 0;
  for(i=0; i<num; i++)
    if(matricula<clase[i].num_matricula)
      matricula = clase[i].num_matricula;
  return matricula;
}
