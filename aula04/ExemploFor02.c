#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  //Declarando a variável para contagem dentro do for, ela não existirá depois
  for(int i=0;i<20;i+=2){
    printf("%d ",i);
  }
  //portanto não será possível imprimir depois...
  //printf("O valor final de i é %d\n",i);
  return 0;
}