/**
 * Leia um nome completo, verifique se as letras iniciais do nome são maiúsculas, se não forem converta e faça a impressão do nome.
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char nome[50];
  printf("Qual seu nome: ");
  gets(nome);
  //ana silva souza
  for(int i=0;nome[i]!='\0';i++){
    if((i==0 || nome[i-1]==' ') && nome[i]>=67 && nome[i]<=122){
      nome[i]-=32;
    }
  }
  printf("Seu nome ajustado fica %s\n",nome);
  return 0;
}