/**
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char palavra[20];
  printf("Entre com uma string: ");
  scanf("%s",palavra);
  printf("A string digitada foi %s\n",palavra);
  int t;
  for(t=0;palavra[t]!='\0';t++);
  printf("A String possui %d letras\n",t);
  return 0;
}