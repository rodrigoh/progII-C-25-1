/**
 * Ler uma matriz 4x4 de números inteiros, multiplicar os elementos da diagonal principal por um número inteiro também lido e escrever a matriz resultante. 
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int matriz[4][4];
  for(int l=0;l<4;l++){
    for(int c=0;c<4;c++){
      printf("matriz[%d][%d]: ",l,c);
      scanf("%d",&matriz[l][c]);
    }
  }
  int numero;
  printf("Entre com um número: ");
  scanf("%d",&numero);
  printf("Multiplicando e imprimindo...\n");
  for(int l=0;l<4;l++){
    for(int c=0;c<4;c++){
      if(l==c)
        matriz[l][c]*=numero;
      printf("%02d ",matriz[l][c]);
    }
    printf("\n");
  }
  return 0;
}