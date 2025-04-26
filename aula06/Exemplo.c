#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  // char letras[50];
  // char palavra[10] = {'p','a','l','a','v','r','a'};
  char nome[50] = "Jonas Silva";
  char frase[50] = "Hoje e sexta feira";
  //Mostrando uma string na tela
  printf("\nO nome é %s",nome);
  printf("\nA frase é %s", frase);
  //Lendo uma String usando o scanf (não pode ler frases, ele corta no primeiro espaço)
  printf("\nQual seu nome: ");
  scanf("%s",nome);
  printf("\nO nome é %s",nome);
  setbuf(stdin,NULL);
  //Lendo uma string usando o gets (pode ler frases completas)
  printf("\nQual seu nome completo: ");
  gets(nome);
  printf("\nO nome completo é %s",nome);
  //Iterando minha String usando \0
  printf("\nIterando a String usando o \\0 como limitador");
  for(int i=0;nome[i]!='\0';i++)
    printf("%c",nome[i]);

  //Descobrindo o tamanho ocupado da String 
  int tamanho;
  for(tamanho=0;nome[tamanho]!='\0';tamanho++);
  printf("\nA quantidade de letras com espaço no seu nome é %d\n",tamanho);
  return 0;
}