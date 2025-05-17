/*
Gere uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));
  int matriz[5][5];
  for(int l=0;l<5;l++){
    for(int c=0;c<5;c++){
      matriz[l][c] = rand()%50;
      printf("%02d ",matriz[l][c]);
    }
    printf("\n");
  }
  int valor;
  printf("Qual valor devo pesquisar na matriz: ");
  scanf("%d",&valor);
  //Pesquisando o número
  int linha=-1;
  int coluna;
  for(int l=0;l<5;l++){
    for(int c=0;c<5;c++){
      if(matriz[l][c]==valor){
        linha = l;
        coluna = c;
      }
    }
  }
  if(linha!=-1){
    printf("Valor %d existe na matriz nas posições l=%d e c=%d\n",valor,linha,coluna);
  }
  else{
    printf("Valor %d não está na matriz\n",valor);
  }
  return 0;
}