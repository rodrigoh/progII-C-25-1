#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

typedef struct{
  char nome[50];
  int idade;
} Pessoa;

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  FILE *arquivo;
  //Lendo o arquivo
  Pessoa p;
  arquivo = fopen("arquivo.dbf","r");
  while(fread(&p,sizeof(Pessoa), 1, arquivo)){
    printf("Nome: %s\n",p.nome);
    printf("Idade: %d\n",p.idade);
  }
  return 0;
}