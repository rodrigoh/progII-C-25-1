/**
 * Declarar dois vetores A e B, ler números para o vetor A, em seguida armazenar no vetor B a multiplicação de cada elemento de A multiplicado pelo seu 
 * índice +1
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
  system("cls");
  srand(time(NULL));
  SetConsoleOutputCP(65001);
  int va[10];
  int vb[10];
  printf("Dados em VA\n");
  for (int i = 0; i < 10; i++) {
    va[i] = rand()%50;
    vb[i] = va[i]*(i+1);
    printf("%d ",va[i]);
  }
  printf("\nDados em VB\n");
  for (int i = 0; i < 10; i++){
    printf("%d ",vb[i]);
  } 
  return 0;
}