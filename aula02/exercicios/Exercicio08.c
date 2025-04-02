/*
Desenvolva um programa em C que calcule a área de um triângulo. Utilize as variáveis AREA, BASE e ALTURA e os operadores aritméticos de multiplicação e divisão. 
*/
#include<stdio.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  float base;
  float altura;
  float area;
  printf("Qual o valor da base: ");
  scanf("%f",&base);
  printf("Qual o valor da altura: ");
  scanf("%f",&altura);
  area = base*altura/2;
  printf("A área do triângulo retângulo vale %.2f\n",area);
  return 0;
}