/*
Declarar uma variável, um ponteiro para essa variável, e usar o ponteiro para acessar e modificar o valor da variável.
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int *p;
  int valor;
  p = &valor;
  *p = 10;
  printf("O valor da variável valor é %d\n",valor);
  printf("O valor para onde p aponta é %d\n",*p);
  printf("O endereço de memória de p é %p\n",p);
  return 0;
}