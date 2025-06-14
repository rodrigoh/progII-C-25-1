#include<stdio.h>
//#include<windows.h>
#include<stdlib.h>

int main(){
 // SetConsoleOutputCP(65001);
  system("clear");
  //Declarando um ponteiro
  int *ponteiro;

  //Declarar uma variável
  int valor = 10;

  //Atribuir o endereço de memória de valor para ponteiro
  ponteiro = &valor;

  printf("O valor de 'valor' é %d\n",valor);
  //printf("O endereço de memória de 'valor' é %x\n",&valor);
  //printf("O endereço de memória armazenado em 'ponteiro' é %x\n",ponteiro);
  printf("O valor que está sendo apontado pelo 'ponteiro' %d\n",*ponteiro);
  return 0;
}