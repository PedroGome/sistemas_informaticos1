void clear();
void pause();

void pause(){
  #ifdef _WIN32
  system("pause");
  #else
  system("read -n1 -r -p \"Press any key to continue...\" key");
  #endif
}

void clear(){
  #ifdef _WIN32
  system("cls");
  #else
  system("clear");
  #endif
}
