#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int soma(int n1, int n2){
  int soma = n1+n2;
  return soma;
}

int subtrai(int n1, int n2){
  int sub = n1-n2;
  return sub;
}

void mostraResultado(int n1, int n2, int resp, char op){
  printf("%d %c %d = %d\n",n1,op,n2, resp);
}

//Criando uma função que não recebe nenhum parâmetro
float obterPI(){
  return 3.1415;
}

int main(){
  system("cls");
  int numeroUm, numeroDois, resposta;
  SetConsoleOutputCP(65001);
  printf("Digite um número: "); 
  scanf("%d",&numeroUm);
  printf("Digite um número: ");
  scanf("%d",&numeroDois);
  resposta = soma(numeroUm,numeroDois);
  mostraResultado(numeroUm,numeroDois,resposta,'+');
  resposta = subtrai(numeroUm,numeroDois);
  mostraResultado(numeroUm,numeroDois,resposta,'-');
  return 0;
}