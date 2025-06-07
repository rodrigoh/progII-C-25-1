/*
Crie uma função em linguagem C que receba 2 números e retorne o maior valor.

Crie uma função em linguagem C que receba 2 números e retorne o menor valor.

Crie uma função em linguagem C que receba 3 números e retorne o maior valor

Crie uma função em linguagem C que receba 3 números e retorne o menor valor
*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int retornaMaior(int n1, int n2){
  if(n1>n2)
    return n1;
  else
    return n2;
}

// int retornaMaior(int n1, int n2){
//   int maior;
//   if(n1>n2)
//     maior =  n1;
//   else
//     maior =  n2;
//   return maior;
// }

int retornaMenor(int n1, int n2){
  if(n1<n2)
    return n1;
  else
    return n2;
}

int retornaMaiorTres(int n1, int n2, int n3){
  if(n1>n2 && n1>n3)
    return n1;
  else if(n2>n1 && n2>n3)
    return n3;
  else
    return n3;
}

int retornaMenorTres(int n1, int n2, int n3){
  if(n1<n2 && n1<n3)
    return n1;
  else if(n2<n1 && n2<n3)
    return n3;
  else
    return n3;
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int n1, n2, n3;
  int opc;
  printf("Informe um valor para\n");
  printf("n1: ");
  scanf("%d",&n1);
  printf("n2: ");
  scanf("%d",&n2);
  printf("n3: ");
  scanf("%d",&n3);
  printf("Escolha uma opção\n");
  printf("1 - para achar o maior entre n1 e n2\n");
  printf("2 - para achar o menor entre n1 e n2\n");
  printf("3 - para achar o maior dos três números\n");
  printf("4 - para achar o menor dos três números\n");
  scanf("%d",&opc);
  switch (opc){
  case 1:
    printf("o maior número entre n1 e n2 é %d\n",retornaMaior(n1,n2));
    break;
  case 2:
    printf("o menor número entre n1 e n2 é %d\n",retornaMenor(n1,n2));
    break;
  case 3:
    printf("o maior número entre os três digitados é %d\n",retornaMaiorTres(n1,n2,n3));
    break;
  case 4:
    printf("o menor número entre os três digitados é %d\n",retornaMenorTres(n1,n2,n3));
    break;
  default:
    printf("A opção selecionada não é válida");
    break;
  }
  return 0;
}

