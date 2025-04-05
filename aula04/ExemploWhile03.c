#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int n1;
  int n2;
  printf("Informe o valor de n1: ");
  scanf("%d",&n1);
  printf("Informe o valor de n2: ");
  scanf("%d",&n2);
  if(n1<n2){
    while(n1<=n2){
      printf("%d ",n1);
      n1++;
    }
  }
  else{
    while(n2<=n1){
      printf("%d ",n2);
      n2++;
    }
  }
  return 0;
}