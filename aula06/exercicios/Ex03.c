/**
 * Gere um vetor aleatoriamente com até 100 números. Depois conte quantos deles são pares, mostre o vetor e a quantidade de números pares encontrados
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
  system("cls");
  srand(time(NULL));
  SetConsoleOutputCP(65001);
  int vetor[100];
  int contPar = 0;
  printf("Gerando e imprimindo o vetor\n");
  for (int i = 0; i < 100; i++){
    vetor[i] = rand()%500;
    printf("%d ",vetor[i]);
    //Contando quantos são pares
    if(vetor[i]%2==0)
      contPar++;
      // contPar+=1;
      // contPar = contPar+1;
  }
  printf("\nDos números acima são pares %d\n",contPar);
  return 0;
}