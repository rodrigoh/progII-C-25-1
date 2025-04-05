#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int cont = 0;
  do{
    printf("%d ",cont);
    cont++;
  }
  while(cont<10);
  return 0;
}