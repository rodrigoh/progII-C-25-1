#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  //For com dois contadores
  for(int i=0, j=9; i<10 && j>=0; i++, j--){
    printf("i = %d, j = %d\n",i,j);
  }
  return 0;
}