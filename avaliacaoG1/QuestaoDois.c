#include<stdio.h>
#include<stdlib.h>
#include<windows.h>


int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char nome[50];
  char iniciais[10];
  int cont = 0;
  printf("Qual seu nome: ");
  fgets(nome,sizeof(nome),stdin);
  for(int i=0;nome[i]!='\0';i++){
    //(Opcional) Removendo o enter do final do nome (o fgets inclui ele junto na String)
    if(nome[i]==10)
      nome[i] = '\0';
    //
    if(nome[i]>=97 && nome[i]<=122){
      nome[i]-=32;
    }
    if(i==0 || nome[i-1]==' ')
      iniciais[cont++] = nome[i];
  }
  iniciais[cont] = '\0';
  printf("Seu nome em maiúsculo fica %s e suas iniciais são %s\n",nome,iniciais);
}