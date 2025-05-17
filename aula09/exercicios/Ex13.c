/**
 * Faça um programa que calcule a média dos elementos da diagonal principal de uma matriz 10 X 10 de inteiros.
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
  int somaD = 0;
  for(int l=0;l<10;l++){
    for(int c=0;c<10;c++){
      matriz[l][c] = rand()%200;
      printf("%03d ",matriz[l][c]);
      if(l==c)
        somaD+=matriz[l][c];
    }
    printf("\n");
  }
  float media = somaD/(float)10;
  printf("A média dos números na diagonal da matriz vale %.2f\n",media);
  return 0;
}