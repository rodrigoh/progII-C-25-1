/*
 * Escreva um programa que lê a hora de início e de término de um jogo e calcule a duração do jogo. Sabendo-se que serão lidos apenas horas inteiras, 
 * que o jogo pode durar no máximo 24 horas e ele pode iniciar em um dia e terminar em outro
 */
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int hInicio;
  int hFim;
  printf("Qual a hora de início da partida: ");
  scanf("%d",&hInicio);
  printf("Qual a hora de fim da partida: ");
  scanf("%d",&hFim);
  if(hFim<hInicio){
    int tempoPartida = 24-hInicio+hFim;
    printf("Sua partida iniciou em um dia e terminou no outro e durou %d horas\n",tempoPartida);
  }
  else{
    int tempoPartida = hFim-hInicio;
    printf("Sua partida durou %d horas\n",tempoPartida);
  }
  return 0;

}