/*
 * As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se forem compradas pelo menos 12. 
 * Escreva um programa que leia o número de maçãs compradas, calcule e escreva o custo total da compra. 
 */
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int quantidade;
  printf("Quantas maçãs foram compradas: ");
  scanf("%d",&quantidade);
  if(quantidade<12){
    float total = quantidade*1.3;
    printf("O total da compra é de R$%.2f\n",total);
  }
  else{
    printf("O total da compra com desconto é de R$%.2f\n",quantidade);
  }
  return 0;
}