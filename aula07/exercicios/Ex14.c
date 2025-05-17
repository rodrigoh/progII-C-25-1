/**
 * Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras minúsculas. 
 * Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.
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
    if(palavra[i]>=65 && palavra[i]<=90){
      //palavra[i] = palavra[i]+32;
      palavra[i]+=32;
    }
  }
  printf("A string toda em minúsculo é igual a %s\n",palavra);
  return 0;
}