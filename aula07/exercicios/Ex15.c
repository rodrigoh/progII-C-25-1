/**
 * Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122.
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
    if(palavra[i]>=97 && palavra[i]<=122){
      //palavra[i] = palavra[i]-32;
      palavra[i]-=32;
    }
  }
  printf("A string toda em maiúsculo é igual a %s\n",palavra);
  return 0;
}