#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

typedef float nota;


int main(){
  SetConsoleOutputCP(65001);
  nota n1;
  nota n2;

  printf("Entre com a primeira nota: ");
  scanf("%f",&n1);
  printf("Entre com a segunda nota: ");
  scanf("%f",&n2);

  nota media = (n1+n2)/2;
  printf("A média vale %.2f\n",media);
  return 0;
}