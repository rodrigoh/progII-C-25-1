/**
 * Faça um programa que leia uma string de até 50 caracteres e a exiba sem as vogais
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char palavra[50];
  printf("Entre com uma palavra ou frase: ");
  gets(palavra);
  for(int i=0;palavra[i]!='\0';i++){
    if(palavra[i]!='a' && palavra[i]!='e' && palavra[i]!='i' && palavra[i]!='o' && palavra[i]!='u')
      printf("%c",palavra[i]);
  }
  return 0;
}