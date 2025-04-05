#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  //Omitir o incremento
  for(int i=0;i<20;){
    printf("%d ",i);
    i++;
  }
  return 0;
}