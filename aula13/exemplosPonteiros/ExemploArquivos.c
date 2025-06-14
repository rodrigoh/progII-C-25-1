#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

typedef struct {
  char nome[50];
  int idade;
} Pessoa;

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  //Criando nosso ponteiro para o arquivo
  FILE *p;

  //Criando algumas pessoas
  Pessoa p1 = {"Ana", 10};
  Pessoa p2 = {"Jonas", 20};
  Pessoa p3 = {"Jose", 21};
  //Abrindo o arquivo para escrita
  p = fopen("cadastro.dbf", "a");
  fwrite(&p1,sizeof(Pessoa),1,p);
  fwrite(&p2,sizeof(Pessoa),1,p);
  fwrite(&p3,sizeof(Pessoa),1,p);
  fclose(p);
  //Lendo o arquivo para leitura
  p = fopen("cadastro.dbf", "r");
  //Percorrento a lista e mostrando as informações do aluno
  while(fread(&p1,sizeof(Pessoa),1,p)){
    printf("%s\n",p1.nome);
    printf("%d\n",p1.idade);
  }
  return 0;
}