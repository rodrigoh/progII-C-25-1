/*
Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
*/
#include<stdio.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  int anos;
  int meses;
  int dias;
  printf("Entre com sua idade: ");
  scanf("%d",&anos);
  printf("Quantos meses se passaram desde seu último aniversário: ");
  scanf("%d",&meses);
  printf("Quantos dias desde o último mês completo: ");
  scanf("%d",&dias);
  int totalDias = anos * 365 + meses * 30 + dias;
  printf("Até agora você viveu %d dias\n",totalDias);
  return 0;
}