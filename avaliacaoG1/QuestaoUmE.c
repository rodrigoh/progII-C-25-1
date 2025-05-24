#include<stdio.h>

int main(){
  int vetor[4] = {1,2,3,4};
  //Correção (não foi declarado o i e o teste é só <)
  for(int i=0;i<4;i++)
  //for(i=0;i<=4;i++)
    printf("%d ",vetor[i]);
  return 0;
}
