#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

//Declaro uma variável global
int numero;

//Crie uma função que receba um valor e informe se ele é positivo ou não.
void verificaNumero(){
  if(numero==0)
    printf("O número é zero");
  else if(numero>0)
    printf("%d é positivo",numero);
  else 
    printf("%d é negativo",numero);
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  printf("Digite um número para classificar: ");
  scanf("%d",&numero);
  verificaNumero();
  return 0;
}