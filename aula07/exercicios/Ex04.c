/**
 * Faça um programa que leia um nome e imprima as 4 primeiras letras do nome
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char nome[20];
  printf("Entre com um nome: ");
  scanf("%s",nome);
  for(int i=0;i<4;i++)
    printf("%c",nome[i]);
  return 0;
}