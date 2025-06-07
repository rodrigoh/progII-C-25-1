/*
Faça um programa em C que acha todos os números primos até 1000. Número primo é aquele que é divisível somente por 1 e por ele mesmo.
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//Retorna 0 se o número não for primo
//Retorna 1 se o número for primo
int ePrimo(int n){
  int contDiv = 0;
  for(int i=1;i<=n;i++)
    if(n%i==0)
      contDiv++;
  if(contDiv==2)
    return 1;
  else
    return 0;
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  printf("São primos os seguintes números:\n");
  for(int i=0;i<1000;i++){
    if(ePrimo(i)==1)
      printf("%d ",i);
  }
  return 0;
}