/*
Escreva um programa para ler um valor (do teclado) e escrever (na tela) o seu antecessor.
*/
#include<stdio.h>
#include<windows.h>

int main(){
  int numero;
  SetConsoleOutputCP(65001);
  printf("Entre com um número: ");
  scanf("%d",&numero);
  numero--;
  // numero-=1;
  // numero = numero-1;
  printf("O antecessor do número é %d\n",numero);
  return 0;
}