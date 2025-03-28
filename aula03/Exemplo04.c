#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int valor;
  printf("Informe um valor: ");
  scanf("%d",&valor);
  
  if(valor >= 10){
    printf("O valor é maior ou igual a 10");
    printf("Agora tem outro comando...");
  }
  else
    printf("O valor é menor que 10");
  return 0;
}