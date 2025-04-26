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
  printf("Dados no vetor\n");
  for (int i = 0; i < tamanho; i++){
    vetor[i] = rand()%100;
    printf("%d ",vetor[i]);
  }
  //Perguntar ao usuário qual número remover
  int remove;
  printf("\nDos números acima qual devo remover: ");
  scanf("%d",&remove);
  //Pesquisar o valor no vetor
  int posicao = -1;
  for (int i = 0; i < tamanho && posicao==-1; i++){
    if(vetor[i]==remove)
      posicao = i;
  }
  //remover o número do vetor
  if(posicao>=0){
    for(int i=posicao;i<tamanho-1;i++){
      vetor[i] = vetor[i+1];
    }
    //Mostrar o vetor na tela
    printf("Dados restantes no vetor\n");
    tamanho--;
    for (int i = 0; i < tamanho; i++){
      printf("%d ",vetor[i]);
    }
  }
  else{
    printf("O número %d, não está no vetor\n",remove);
  }
  return 0;  
}