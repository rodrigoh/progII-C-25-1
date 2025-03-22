/*
Escreva um programa para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.
*/
#include<stdio.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  float salario;
  float percentual;
  printf("Qual seu salário atual R$ ");
  scanf("%f",&salario);
  printf("Qual o percentual de reajuste: ");
  scanf("%f",&percentual);
  float novoSalario = salario + salario * (percentual/100);
  //float novoSalario = salario * 1+(percentual/100)
  printf("Seu salário de R$%.2f reajustado em %.2f %% será de R$%.2f\n",salario, percentual, novoSalario);
  return 0;
}