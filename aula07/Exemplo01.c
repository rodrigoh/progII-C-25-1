#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int vetor[10];
  //tipo nome[nLinhas][nColunas]
  int matriz[3][5];
  //Declarar e inicializar uma matriz
  int matrizB[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};
  //Acessando uma posição da matriz
  matriz[0][2] = 25;
  printf("%d\n",matriz[0][2]);
  //Iterar uma matriz
  for (int l = 0; l < 3; l++){
    for(int c = 0; c < 5; c++){
      printf("matriz[%d][%d] = ",l,c);
      scanf("%d",&matriz[l][c]);
    }
  }
  //Impressão da matriz
  for(int l=0;l<3;l++){
    for(int c=0;c<5;c++){
      //%02d garante que todos os números sejam impressos com 2 dígitos, preenchendo com 0s a esquerda 
      //%03d garante que todos os números sejam impressos com 3 dígitos, preenchendo com 0s a esquerda 
      printf("%02d ",matriz[l][c]);
    }
    printf("\n");
  }

  
}