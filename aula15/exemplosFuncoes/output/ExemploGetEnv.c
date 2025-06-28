#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);

  char variavel[10];
  printf("Digite o nome de uma variável de ambiente: ");
  scanf("%s", variavel);

  char *valor = getenv(variavel);

  printf("O valor da variável de ambiente %s é %s\n",variavel, valor);
  return 0;
}