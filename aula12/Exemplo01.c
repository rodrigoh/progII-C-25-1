#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//Posso criar uma struct e já declarar um exemplo dela, como no caso pessoaUm
struct Pessoa{
  char nome[50];
  float altura;
  int idade;
} pessoaUm;

//Posso declarar mais exemplos de Pessoa, usando a palavra strict Pessoa nomeExemplo
struct Pessoa pessoaDois;

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  //Uma instância local de Pessoa
  struct Pessoa pessoaTres;
  printf("Qual seu nome: ");
  //Para acessar os membros da nossa struct usamos o .
  //fgets(pessoaTres.nome,sizeof(pessoaTres.nome),stdin);
  scanf("%s",pessoaTres.nome);
  printf("%s qual sua altura em metros: ",pessoaTres.nome);
  scanf("%f",&pessoaTres.altura);
  printf("%s qual sua idade: ",pessoaTres.nome);
  scanf("%d",&pessoaTres.idade);
  printf("Seus dados\n");
  printf("Nome: %s\n",pessoaTres.nome);
  printf("Você mede %.2f metros\n", pessoaTres.altura);
  printf("Sua idade é %d anos\n",pessoaTres.idade);
  return 0;
}