/**
 * Declare um vetor de 10 elementos, gere números aleatórios para ele. Em seguida mostre o vetor na tela e pergunte ao usuário qual número ele 
 * pretende remover do vetor. Em seguida, remova esse número do vetor e mostre ele novamente na tela.
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
  system("cls");
  srand(time(NULL));
  SetConsoleOutputCP(65001);
  int tamanho = 10;
  int vetor[tamanho];
  int vetorB[tamanho];
  printf("Dados no vetor\n");
  for (int i = 0; i < tamanho; i++){
    vetor[i] = rand()%20;
    printf("%d ",vetor[i]);
  }
  //Perguntar ao usuário qual número remover
  int remove;
  printf("\nDos números acima qual devo remover: ");
  scanf("%d",&remove);
  int cont=0;
  for (int i = 0; i < tamanho; i++) {
    if(vetor[i]!=remove){
      vetorB[cont] = vetor[i];
      cont++;
    }
  }
  printf("\nDados restantes no vetor\n");
  for (int i = 0; i < cont; i++){
    printf("%d ",vetorB[i]);
  }
  return 0;  
}