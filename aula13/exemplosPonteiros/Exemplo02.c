#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  //Declaração do ponteiro
  int *p;
  //Realizando a alocação de espaço para 3 inteiros
  //p = (int*) malloc(sizeof(int)*3);
  p = (int*) calloc(3,sizeof(int));

  printf("Digite um número: ");
  scanf("%d",p);
  //Acessando as posições do ponteiro...
  printf("Digite outro número: ");
  scanf("%d",p+1);
  
  printf("Digite mais um número: ");
  scanf("%d",p+2);
  //Mostrar o valor na tela
  printf("O primeiro número vale %d\n",*p);
  printf("O segundo número vale %d\n",*(p+1));
  printf("O terceiro número vale %d\n",*(p+2));

}