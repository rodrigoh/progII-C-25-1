#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int valor;
  printf("Informe um valor: ");
  scanf("%d",&valor);
  
  if(valor==0)
    printf("O valor digitado é zero\n");
  else if(valor>0)
    printf("O valor %d é positivo\n",valor);
  else
    printf("O valor %d é negativo\n",valor);
  return 0;
}