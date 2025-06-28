#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

int main(){
  SetConsoleOutputCP(65001);
  char nome[100];
  char copia[100];
  char copiaDois[100];
  char sobrenome[100];
  printf("Digite seu nome: ");
  scanf("%s", nome);
  strcpy(copia,nome);
  printf("As string nome e cópia tem os seguintes valores '%s' e '%s'\n",nome, copia);
  strncpy(copiaDois, nome, 3);
  printf("As string nome = '%s' e os três primeiros caracteres dela são '%s'\n",nome, copiaDois);

  printf("Digite o seu nome: ");
  scanf("%s",nome);
  printf("Digite o seu sobrenome: ");
  scanf("%s",sobrenome);
  strcat(nome," ");
  strcat(nome,sobrenome);
  printf("Seu nome completo é %s\n",nome);
  int tamanho = strlen(nome);
  printf("O seu nome tem %d caracteres sem espaços\n",tamanho-1);
  return 0;
}