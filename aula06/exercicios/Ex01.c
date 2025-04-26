/**
 * Criar um vetor A com 5 elementos, carregar ele com números aleatórios. Declarar um vetor B. Copiar todos os elementos do Vetor A para o Vetor B 
 * e mostrar os dois na tela;
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main(){
  system("cls");
  srand(time(NULL));
  //Declarar os vetores
  int vetor[5];
  int vetorB[5];
  printf("Dados no vetor A:\n");
  for(int i=0;i<5;i++){
    vetor[i] = rand()%20;
    printf("%d ",vetor[i]);
  }
  printf("\nDados no vetor B:\n");
  for(int i=0;i<5;i++){
    vetorB[i] = vetor[i];
    printf("%d ",vetorB[i]);
  }
  return 0;
}