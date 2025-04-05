#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int n1;
  int n2;
  printf("Informe um valor para n1: ");
  scanf("%d",&n1);
  printf("Informe um valor para n2: ");
  scanf("%d",&n2);
  
  for(int i=n1;i<=n2;i++)
    printf("%d ",i);
  return 0;
}