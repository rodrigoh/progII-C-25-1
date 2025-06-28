#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);

  bool valor = false;
  printf("O valor é %d\n",valor);
  //if(valor==true) ou if(valor==1)
  if(valor)
    printf("O valor é verdade");
  else
    printf("O valor é falso");
  return 0;
}