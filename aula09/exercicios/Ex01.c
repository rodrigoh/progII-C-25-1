/**
 * Ler 6 números inteiros para preencher uma matriz D 2x3, ou seja, com 2 linhas e 3 colunas (considere que não serão informados valores duplicados). A seguir, ler um número inteiro X e escrever uma mensagem indicando se o valor de X existe ou não na matriz D. 
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int matriz[2][3];

  for(int l=0;l<2;l++){
    for(int c=0;c<3;c++){
      printf("matriz[%d][%d]: ",l,c);
      scanf("%d",&matriz[l][c]);
    }
  }
  int x;
  printf("Qual número devo pesquisar na matriz: ");
  scanf("%d",&x);
  int achei = 0;
  for(int l=0;l<2;l++){
    for(int c=0;c<3;c++){
      if(matriz[l][c]==x)
        achei = 1;
    }
  }
  if(achei==1)
    printf("O número %d está na matriz\n",x);
  else
    printf("O número %d não está na matriz\n",x);
  return 0;
}