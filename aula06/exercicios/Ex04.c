/**
 * Faça um programa que receba do usuário um vetor com 10 posições. Em seguida, deverá ser impresso o maior é o menor elemento do vetor. 
 * E indique a posição em que ele aparece no vetor Q6
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  int maior;
  int menor;
  int pMaior=0;
  int pMenor=0;
  int vetor[10];
  for (int i = 0; i < 10; i++){
    printf("informe um valor para vetor[%d]: ",i);
    scanf("%d",&vetor[i]);
    if(i==0){
      menor = vetor[i];
      maior = vetor[i];
    } 
    else{
      if(vetor[i]<menor){
        menor = vetor[i];
        pMenor = i;
      }
      if(vetor[i]>maior){
        maior = vetor[i];
        pMaior = i;
      }
    }
  }
  printf("O maior número digitado foi %d e está na posição %d\n",maior,pMaior);
  printf("O menor número digitado foi %d e está na posição %d\n",menor,pMenor);
  return 0;
}
