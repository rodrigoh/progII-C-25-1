/*
Escreva um programa para calcular a área de uma circunferência, considerando a fórmula ÁREA = π * RAIO² . Utilize as variáveis AREA e RAIO, a 
constante π (pi = 3,14159) e os operadores aritméticos de multiplicação. 
*/
#include<stdio.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  float raio;
  float area;
  printf("Qual o valor do raio: ");
  scanf("%f",&raio);
  area = 3.14159*raio*raio;
  printf("A área do círculo vale %.2f cm²\n",area);
  return 0;
}