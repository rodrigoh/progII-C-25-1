/**
 *  Dada uma matriz B, determine a linha de B que possui a maior soma de seus elementos. 
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));
  int matrizB[5][6];
  int soma = 0;
  int mSoma = 0;
  int lSoma = 0;
  for(int l=0;l<5;l++){
    for(int c=0;c<6;c++){
      matrizB[l][c] = rand()%50;
      printf("%02d ",matrizB[l][c]);
      soma+=matrizB[l][c];      
    }
    if(soma>mSoma){
      mSoma = soma;
      lSoma=l;
    }  
    //Imprimir a soma da linha
    printf(" -> %d ",soma);
    printf("\n");
    soma = 0;
  }
  printf("A linha com maior soma total é %d e a soma vale %d\n",lSoma,mSoma);
  return 0;
}