#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  //Precisa de um contador
  int cont=0;
  while(cont<10){
    printf("%d ",cont);
    cont++;
    // cont+=1;
    // cont = cont+1;
  }
  printf("\nValor final de cont após o looping %d",cont);
  return 0;
}