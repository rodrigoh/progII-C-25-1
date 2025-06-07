#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

typedef struct{
  char nome[50];
  int idade;
} Pessoa;


//Agora o tipo de retorno da minha função é Pessoa (meu "novo" tipo de dados)
Pessoa leDadosPessoa(){
  Pessoa p1;
  printf("Qual o nome: ");
  scanf("%s",p1.nome);
  printf("Qual a idade: ");
  scanf("%d",&p1.idade);
  return p1;
}

void mostraPessoa(Pessoa p1){
  printf("%s tem %d anos\n",p1.nome,p1.idade);
}

int main(){
  Pessoa p1;
  p1 = leDadosPessoa();
  mostraPessoa(p1);
  return 0;
}