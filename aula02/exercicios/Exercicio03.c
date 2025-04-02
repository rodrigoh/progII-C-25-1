/*
Escreva um programa para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos. 
Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.
*/
#include<stdio.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  float nEleitores, nVotosBrancos, nVotosNulos, nVotosValidos;
  printf("Qual o total de eleitores: ");
  scanf("%f",&nEleitores);
  printf("Quantos votos ficaram em branco: ");
  scanf("%f",&nVotosBrancos);
  printf("Qual o número de votos nulos: ");
  scanf("%f",&nVotosNulos);
  printf("Qual o número de votos válidos: ");
  scanf("%f",&nVotosValidos);
  float pVB, pVN, pVV;
  pVB = nVotosBrancos / nEleitores * 100;
  pVN = nVotosNulos / nEleitores * 100;
  pVV = nVotosValidos / nEleitores * 100;
  printf("O percentual de cada tipo de voto é:\n");
  printf("Brancos %.2f %c\n",pVB,37); 
  printf("Nulos %.2f %c\n",pVN,37); 
  printf("Validos %.2f %c\n",pVV,37); 
  return 0;
}