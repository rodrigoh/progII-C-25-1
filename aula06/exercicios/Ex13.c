/**
 * Ler dois vetores: R de 5 elementos e S de 10 elementos. Gerar um vetor X de 15 elementos cujas 5 primeiras posições contenham os 
 * elementos de R e as 10 últimas posições, os elementos de S. Escrever o vetor X. 
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
  system("cls");
  srand(time(NULL));
  SetConsoleOutputCP(65001);
  int vr[5];
  int vs[10];
  int vx[15];
  printf("Gerando dados para o vetor R\n");
  for (int i = 0; i < 5; i++){
    vr[i] = rand()%20;
    printf("%d ",vr[i]);
  }
  printf("\nGerando dados para o vetor S\n");
  for (int i = 0; i < 10; i++){
    vs[i] = rand()%20;
    printf("%d ",vs[i]);
  }
  printf("\nGerando dados para o vetor X\n");
  for (int i = 0; i < 15; i++){
    if(i<5){
      vx[i] = vr[i];
    }
    else{
      vx[i] = vs[i-5];
    }
    printf("%d ",vx[i]);
  }
  
  return 0;
}