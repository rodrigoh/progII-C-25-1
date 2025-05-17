/**
 * Faça um programa que leia uma palavra (máximo de 50 letras) e some 1 no valor ASCII de cada caractere da palavra. Imprima a string resultante.
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
    palavra[i]+=1;
  }
  printf("A nova string é %s\n",palavra);
  return 0;
}