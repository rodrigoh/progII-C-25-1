/*
Uma loja está levantando o valor total de todas as mercadorias em estoque. Escreva um programa que permita a entrada das seguintes informações: 
a) Número total de mercadorias no estoque (quantidade total). 
b) Valor de cada mercadoria. 
Ao final imprimir o valor total em estoque e a média de valor das mercadorias
Agora pergunte se tem mais produtos
*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  int quant=0;
  //Processo de contagem
  float soma = 0;
  char resp;
  do{
    float valor;
    printf("Qual o valor do %d° produtoR$",quant+1);
    scanf("%f",&valor);
    soma+=valor;
    quant++;
    setbuf(stdin,NULL);
    printf("Tem mais produtos (s - sim / n - não): ");
    scanf("%c",&resp);
  }
  while(resp=='s');
  float media = soma/quant;
  printf("O valor total do estoque é R$%.2f e a média dos valores é R$%.2f\n",soma,media);
  return 0;

}