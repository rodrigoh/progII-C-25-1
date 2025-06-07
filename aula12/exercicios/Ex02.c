#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

// void verificaNulo(int numero){
//   if(numero==NULL)
//     printf("O valor é nulo");
//   else
//     printf("O valor não é nulo");
// }

void verificaNulo(int numero){
  if(numero==0)
    printf("O valor é nulo");
  else
    printf("O valor não é nulo");
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  //verificaNulo(NULL);
  verificaNulo(0);
  printf("\n");
  verificaNulo(5);
  return 0;
}