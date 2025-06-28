#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);

  char leitura[10];
  printf("Digite um número inteiro: ");
  scanf("%s", leitura);

  int numero = atoi(leitura);
  printf("O número digitado foi %d\n",numero);

  printf("Digite um número float: ");
  scanf("%s", leitura);

  float numeroFloat = atof(leitura);

  printf("O número float digitado é %.2f\n",numeroFloat);
  return 0;
}
