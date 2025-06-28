/*
Crie uma função que receba um vetor como parâmetro e determine a soma 
dos elementos
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int soma(int *vetor, int tam){
  int soma = 0;
  for(int i=0;i<tam;i++){
    soma+=vetor[i];
    //soma+=*(vetor+i);
  }
  return soma;
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int v[] = {1, 2, 3, 4, 5};
  //sizeof(v)/sizeof(int) -> permite descobrir o tamanho do vetor
  int resp = soma(v, sizeof(v)/sizeof(int));
  printf("A soma dos elementos em V vale %d\n",resp);
  return 0;
}