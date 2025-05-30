#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int n1;
int n2; 
int resultado;

void soma();
void subtrai();
void monstraResulado(char op);

int main(){
  //system("cls");
  SetConsoleOutputCP(65001);
  printf("Digite um número: "); 
  scanf("%d",&n1);
  printf("Digite um número: ");
  scanf("%d",&n2);
  soma();
  monstraResulado('+');
  subtrai();
  monstraResulado('-');
  return 0;
}

void soma(){
  resultado = n1+n2;
}

void subtrai(){
  resultado = n1-n2;
}

void monstraResulado(char op){
  printf("%d %c %d = %d\n",n1,op,n2, resultado);
}

