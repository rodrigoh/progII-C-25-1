/*
Faça um programa que converta metros para centímetros. Lembrando que 1m = 100cm
*/
#include<stdio.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  float metros, cm;
  printf("Entre com uma medida em metros: ");
  scanf("%f",&metros);
  cm = metros*100;
  printf("%.2f metros equivale(m) a %.2f cm\n",metros, cm);
  return 0;
}