/**
 * Faça um programa que leia uma lista de até 10 salários, a cada salário lido o programa deve perguntar se o usuário gostaria de 
 * continuar a leitura, caso responda Sim, o programa deve ler mais um salário, até o limite de 10. Ao final ler o percentual de 
 * reajuste dos salários, reajustar e mostrar os novos valores.
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  float salarios[10];
  int cont=0;
  char resp;
  do{
    printf("Informe o %d° salário R$",cont+1);
    scanf("%f",&salarios[cont]);
    cont++;
    printf("Existem mais salários (s - sim, n - não): ");
    setbuf(stdin,NULL);
    scanf("%c",&resp);
  }
  while(resp=='s' && cont<10);
  float percentual;
  printf("Qual o percentual de reajuste: ");
  scanf("%f",&percentual);
  for (int i = 0; i < cont; i++){
    salarios[i] = salarios[i]+salarios[i]*(percentual/100);
    printf("%d° novo salário R$%.2f\n",i+1,salarios[i]);
  }

  return 0;
}