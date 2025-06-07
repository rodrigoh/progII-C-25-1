#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

//Retorna 1 para número perfeito e 0 para não perfeito
int ePerfeito(int n){
  int soma = 0;
  for(int i=1;i<n;i++)
    if(n%i==0)
      soma+=i;
  if(soma==n)
    return 1;
  else
    return 0;
}



int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  printf("São perfeitos os seguintes números:\n");
  for(int i=1;i<1000;i++){
    if(ePerfeito(i)==1)
      printf("%d ",i);
  }
  return 0;
}