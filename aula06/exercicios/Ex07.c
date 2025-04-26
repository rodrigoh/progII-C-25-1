/**
 * Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa. 
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  int vetor[6];
  for (int i = 0; i < 6; i++){
    printf("Informe um valor para vetor[%d]: ",i);
    scanf("%d",&vetor[i]);
  }
  printf("Dados no vetor em ordem inversa\n");
  for(int i=5;i>=0;i--){
    printf("%d ",vetor[i]);
  }
  return 0;
}