/*
Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um programa para ler o preço do litro da gasolina e o valor do pagamento, 
e exibir quantos litros ele conseguiu colocar no tanque.  
*/
#include<stdio.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  float valor;
  float preco;

  printf("Quantos reais tem para abastecer R$");
  scanf("%f",&valor);
  printf("Qual o valor do litro R$");
  scanf("%f",&preco);
  float litros = valor / preco;
  printf("Com seus R$%.2f serão abastecidos %.2f litros\n",valor,litros);
  return 0;
}