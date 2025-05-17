/**
 * Gere duas matrizes, A 4x6 e B 4x6, e criar: 
a) uma matriz S que seja a soma de A e B (A+B) 
b) uma matriz D que seja a diferença de A e B (A-B)
 Escrever as matrizes S e D.
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));
  int matrizA[4][6];
  int matrizB[4][6];
  int matrizD[4][6];
  int matrizS[4][6];
  printf("Dados na matriz A\n");
  for(int l=0;l<4;l++){
    for(int c=0;c<6;c++){
      matrizA[l][c] = rand()%50;
      printf("%02d ",matrizA[l][c]);
    }
    printf("\n");
  }

  printf("\nDados na matriz B\n");
  for(int l=0;l<4;l++){
    for(int c=0;c<6;c++){
      matrizB[l][c] = rand()%50;
      printf("%02d ",matrizB[l][c]);
    }
    printf("\n");
  }

  printf("\nDados na matriz S\n");
  for(int l=0;l<4;l++){
    for(int c=0;c<6;c++){
      matrizS[l][c] = matrizA[l][c]+matrizB[l][c];
      printf("%02d ",matrizS[l][c]);
    }
    printf("\n");
  }

  printf("\nDados na matriz D\n");
  for(int l=0;l<4;l++){
    for(int c=0;c<6;c++){
      matrizD[l][c] = matrizA[l][c]-matrizB[l][c];
      printf("%02d ",matrizD[l][c]);
    }
    printf("\n");
  }
  return 0;
}