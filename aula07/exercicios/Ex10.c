/**
 * Faça um programa que conte quantas vogais tem na string lida
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
  int contVogal=0;
  int contEspaco=0;
  for(int i=0;palavra[i]!='\0';i++){
    if(palavra[i]=='a' || palavra[i]=='e' || palavra[i]=='i' || palavra[i]=='o' || palavra[i]=='u')
      contVogal++;
    else if(palavra[i]==' ')
      contEspaco++;
  }
  printf("A string '%s' possui %d vogais e %d espaços\n",palavra,contVogal,contEspaco);
  return 0;
}