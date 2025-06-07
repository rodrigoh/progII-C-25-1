/*
Elabore uma função que retorne como resultado o valor de uma potência de uma base  B qualquer  elevada a  um expoente  E qualquer,  ou  seja, de  B
E  (Sem utilizar funções especiais da biblioteca matemática do C).
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//x^n = x*x^n-1 para todo n>1 e para n = 0 retorna 1
int potencia(int base, int expo){
  if(expo==1)
    return base;
  else
    return potencia(base,expo-1)*base;
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int base;
  int exponte;
  printf("Entre com o valor da base: ");
  scanf("%d",&base);
  printf("Entre com o valor dao expoente: ");
  scanf("%d",&exponte);
  printf("%d\n",potencia(base,exponte));
  return 0;
}