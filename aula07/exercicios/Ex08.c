/**
 * Faça um programa que leia uma palavra e a imprima ao contrário
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char palavra[20];
  printf("Entre com uma palavra: ");
  scanf("%s",palavra);
  int t;
  for(t=0;palavra[t]!='\0';t++);
  for(int i=t-1;i>=0;i--)
    printf("%c",palavra[i]);
  return 0;
}