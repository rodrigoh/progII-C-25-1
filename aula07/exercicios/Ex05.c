/**
 * Faça um programa que leia um nome completo de até 50 caracteres e conte quantas letras ele tem, não conte os espaços entre os nomes
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char nome[50];
  printf("Qual seu nome: ");
  fgets(nome,sizeof(nome),stdin);
  //gets(nome);
  int t=0;
  for(int i=0;nome[i]!='\n';i++)
    if(nome[i]!=' ')
      t++;
  printf("O nome sem espaços tem %d caracteres\n",t);
  return 0;
}