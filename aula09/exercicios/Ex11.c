/*
 Faça um programa para gerar automaticamente números entre 1 e 99 de uma cartela de bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada.
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
  int vetor[25];
  int contV=0;
  printf("Gerando uma cartela de bingo\n");
  for(int l=0;l<5;l++){
    for(int c=0;c<5;){
      int numero = rand()%100;
      //Procurando o numero dentro do vetor
      int achei = 0;
      for(int i=0;i<contV;i++){
        if(vetor[i]==numero){
          achei = 1;
        }
      }
      //
      if(achei==0){
        vetor[contV] = numero;
        matriz[l][c] = numero;
        printf("%02d ",matriz[l][c]);
        contV++;
        c++;
      }
    }
    printf("\n");
  }
  return 0;
}