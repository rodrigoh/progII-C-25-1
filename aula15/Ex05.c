/*
Crie um programa que contenha uma função que permita passar por parâmetro 
dois números inteiros A e B. A função ao deverá calcular a soma entre 
estes dois números e armazenar o resultado na variável A. Esta função 
não deverá possuir retorno, mas deverá´ modificar o valor do primeiro 
parâmetro. Imprima os valores de A e B na função principal.
*/
#include<stdio.h>
#include<stdlib.h>

void soma(int *a, int *b){
  *a = *a + *b;
}

int main(){
  system("clear");
  int a;
  int b;
  printf("Informe o valor de a: ");
  scanf("%d",&a);
  printf("Informe o valor de b: ");
  scanf("%d",&b);
  soma(&a, &b);
  printf("A soma dos valores vale %d\n",a);
  return 0;
}