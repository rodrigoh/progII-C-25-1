/*
Faça um programa que leia três valores inteiros e chame uma função que receba 
estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor valor 
na primeira variável, o segundo menor valor na variável do meio, e o maior 
valor na última variável. A função deve retornar o valor 1 se os três valores 
forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados 
na tela.
*/
#include<stdio.h>
#include<stdlib.h>

int ordena(int *n1, int *n2, int *n3){
  int a,b,c;
  if (*n1 == *n2 && *n2 == *n3){
    return 1;
  }
  if(*n1 < *n2 && *n2 < *n3)
    a = *n1, b = *n2, c = *n3;
  else if(*n1 < *n3 && *n3 < *n2)
    a = *n1, b = *n3, c = *n2;
  else if(*n2 < *n1 && *n1 < *n3)
    a = *n2, b = *n1, c = *n3;
  else if(*n2 < *n3 && *n3 < *n1)
    a = *n2, b = *n3, c = *n1;
  else if(*n3 < *n2 && *n2 < *n1)
    a = *n3, b = *n2, c = *n1;
  else if(*n3 < *n1 && *n1 < *n2)
    a = *n3, b = *n1, c = *n2;
  *n1 = a;
  *n2 = b;
  *n3 = c;
  return 0;

}

int main(){
  system("clear");
  int n1, n2, n3;
  printf("Digite um número: ");
  scanf("%d",&n1);
  printf("Digite um número: ");
  scanf("%d",&n2);
  printf("Digite um número: ");
  scanf("%d",&n3);
  int retorno = ordena(&n1,&n2,&n3);
  if(retorno==0){
    printf("A ordem dos números é %d, %d, %d\n",n1,n2,n3);
  }
  else{
    printf("Os números são iguais\n");
  }
  return 0;
} 