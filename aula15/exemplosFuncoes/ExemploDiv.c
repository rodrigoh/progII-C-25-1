#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  int numeroUm;
  int numeroDois;
  printf("Digite um número: ");
  scanf("%d",&numeroUm);
  printf("Digite um segundo número: ");
  scanf("%d",&numeroDois);
  div_t resultado = div(numeroUm,numeroDois);
  //int r = numeroUm/numeroDois;
  //int resp = numeroUm/numeroDois;
  printf("%d / %d = %ld\n",numeroUm,numeroDois,resultado.quot);
  return 0;
}
