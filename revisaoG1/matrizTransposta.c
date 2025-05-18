/*
Transposta de Matriz: Escreva um programa que leia uma matriz 3x4 de números inteiros do usuário. Calcule e imprima a matriz transposta 
(onde as linhas se tornam colunas e vice-versa).
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));
  int matriz[3][4];
  int transposta[4][3];
  //Gerando aleatório já que é mais simples
  printf("\nMatriz original\n");
  for(int l=0;l<3;l++){
    for(int c=0;c<4;c++){
      matriz[l][c] = rand()%100;
      printf("%02d ",matriz[l][c]);
      //Transposta
      transposta[c][l] = matriz[l][c];
    }
    printf("\n");
  }
  printf("\nMatriz transposta\n");
  for(int l=0;l<4;l++){
    for(int c=0;c<3;c++){
      printf("%02d ",transposta[l][c]);
    }
    printf("\n");
  }
  return 0;
}