#include<stdio.h>
#include<stdlib.h>

int choice(void);

int main(){
  int t=0, guess=0;
  t = random() % choice();

  do{
    printf("Guess a number: ");
    scanf("%d",&guess);
  }
  while(guess != t);
  printf("Correct!");
}

int choice(){
  int choice;
  char c;
  while ( 1 == 1 ){
    printf("e \t EASY\nm \t MEDIUM\nh \t HARD\n");
    c = getchar();
    printf("Character entered: ");
    putchar(c);
    printf("\n");

    switch(c){
    case 'e':{
      choice = 100;
      break;
    }
    case 'm':{
      choice = 500;
      break;
    }
    case 'h':{
      choice = 1000;
      break;
    }
    }
    printf("invalid choice, choose again\n");
  }
  return choice;
}
