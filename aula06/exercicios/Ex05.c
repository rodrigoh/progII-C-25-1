/**
 * Declare um vetor, gere números aleatórios para ele, em seguida realize a soma de todos os elementos do vetor, mostre o vetor e a soma
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
  system("cls");
  srand(time(NULL));
  SetConsoleOutputCP(65001);
  int vetor[10];
  int soma = 0;
  printf("Dados gerados para o vetor\n");
  for (int i = 0; i < 10; i++){
    vetor[i] = rand()%50;
    printf("%d ",vetor[i]);
    soma+=vetor[i];
  }
  printf("\nA soma dos números acima vale %d\n",soma);
  
  return 0;
}