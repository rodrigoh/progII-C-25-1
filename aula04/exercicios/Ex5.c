/*
 A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais de 40 horas receberá hora extra, 
 cujo cálculo é o valor da hora regular com um acréscimo de 50%. Escreva um programa que leia o número de horas trabalhadas em um mês, 
 o salário por hora e escreva o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham sido trabalhadas 
 (considere que o mês possua 4 semanas exatas). 
 */
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  float valorHora;
  float nHoras;
  float salario;
  printf("Qual a quantidade de horas trabalhadas no mês: ");
  scanf("%f",&nHoras);
  printf("Qual o valor da hora trabalhada R$");
  scanf("%f",&valorHora);
  if(nHoras<=160){
    salario = nHoras*valorHora;
  }
  else{
    float horasExtras = nHoras-160;
    salario = 160*valorHora+horasExtras*valorHora*0.5;
  }
  printf("Seu salário será de R$%.2f\n",salario);

  // Se o funcionário sempre cumprir pelo menos 160 horas
  // salario = 160*valorHora + (nHoras-160)*valorHora*0.5;
  return 0;
}
