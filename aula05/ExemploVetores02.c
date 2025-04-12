#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  int quant;
  printf("Qual deve ser o tamanho do vetor: ");
  scanf("%d",&quant);
  int vetor[quant];
  for(int i =0;i<quant;i++){
    printf("vetor[%d]: ",i);
    scanf("%d",&vetor[i]);
  }
  printf("Dados no vetor\n");
  for(int i=0;i<quant;i++){
    printf("%d ",vetor[i]);
  }
  return 0;
}