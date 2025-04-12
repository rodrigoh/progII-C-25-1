/*
Uma loja está levantando o valor total de todas as mercadorias em estoque. Escreva um programa que permita a entrada das seguintes informações: 
a) Número total de mercadorias no estoque (quantidade total). 
b) Valor de cada mercadoria. 
Ao final imprimir o valor total em estoque e a média de valor das mercadorias
*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  int quant;
  printf("Qual a quantidade de produtos em estoque: ");
  scanf("%d",&quant);
  //Processo de contagem
  float soma = 0;
  for(int i=0;i<quant;i++){
    float valor;
    printf("Qual o valor do %d° produtoR$",i+1);
    scanf("%f",&valor);
    soma+=valor;
  }
  float media = soma/quant;
  printf("O valor total do estoque é R$%.2f e a média dos valores é R$%.2f\n",soma,media);
  return 0;

}