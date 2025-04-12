#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  int vetor[] = {1,2,3,4,5,6,7,8};
  //Dividindo o tamanho em bytes do vetor pelo tamanho em bytes do int
  int tamanho = sizeof(vetor)/sizeof(int);
  printf("O tamanho do vetor é %d\n",tamanho);
  for(int i=0;i<tamanho;i++){
    printf("%d ",vetor[i]);
  }
  return 0;
}