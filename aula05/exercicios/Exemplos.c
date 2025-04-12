#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  //Enquanto faça
  printf("\nWhile\n");
  int cont =0;
  while(cont<10){
    printf("%d ",cont);
    cont++;
  }

  //faça enquanto
  printf("\nDo...while\n");
  cont = 0;
  do{
    printf("%d ",cont);
    cont++;
  }while(cont<10);
  //para até faça
  printf("\nfor\n");
  for(int i=0;i<10;i++)
    printf("%d ",i);
  printf("\nOutro exemplo de for\n");
  cont = 0;
  for(;cont<10;){
    printf("%d ",cont);
    cont++;
  }
  printf("\nFor com mais de uma contador\n");
  for(int i=0,j=9;i<10 && j>=0;i++,j--){
    printf("i = %d, j = %d\n",i,j);
  }
  return 0;
} 

