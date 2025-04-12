#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  //Declarando um vetor
  //tipo nome[quantidade_elementos]
  //Um vetor de 10 elementos tem índices de 0 a 9
  int vetor[10];
  //Declarar e inicializar um vetor
  int numeros[] = {1,2,3,4,5,6,7,8,9,10};
  //Lendo um vetor do teclado
  for(int i=0;i<10;i++){
    printf("Entre com um número para vetor[%d]: ",i);
    scanf("%d",&vetor[i]);
  }
  //Mostrar esse vetor na tela
  for(int i=0;i<10;i++){
    printf("%d ",vetor[i]);
  }


  return 0;
}