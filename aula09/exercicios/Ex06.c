/**
 * Gerar uma matriz quadrada aleatoriamente de 10x10 e imprimir a diagonal desta matriz
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));
  int matriz[10][10];
  for(int l=0;l<10;l++){
    for(int c=0;c<10;c++){
      matriz[l][c] = rand()%200;
      printf("%03d ",matriz[l][c]);
    }
    printf("\n");
  }
  printf("\nDados na diagonal da matriz\n");
  for(int i=0;i<10;i++){
    printf("%d ",matriz[i][i]);
  }
  return 0;
}