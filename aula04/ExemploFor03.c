#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int i=10;
  //Omitir a inicialização da variável
  for(;i>=0;i--){
    printf("%d ",i);
  }
  printf("\nNo final do valor de i é %d\n",i);
  return 0;
}