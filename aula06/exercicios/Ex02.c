/**
 * Declarar três vetores A, B e C de 10 elementos. Gerar números aleatórios para os vetores A e B. O vetor C deve receber a soma dos 
 * elementos do vetor A com o vetor B. Mostrar os três vetores
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
  system("cls");
  srand(time(NULL));
  int va[10];
  int vb[10];
  int vc[10];
  printf("Gerando valores para va e vb ..");
  for (int i = 0; i < 10; i++){
    va[i] = rand()%50;
    vb[i] = rand()%50;
  }
  printf("[ok]\nSomando os vetores\n");
  for (int i = 0; i < 10; i++){
    vc[i] = va[i]+vb[i];
    printf("%02d + %02d = %02d\n",va[i],vb[i],vc[i]);
  }
  return 0;  
}