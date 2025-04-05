/*
 Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Crie um programa que pergunte se o usuário deseja converter a 
 temperatura de ºC para ºF (lendo o número 1) e de ºF para ºC (lendo o número 2) depois de lida a opção do usuário, leia  temperatura, converta de acordo 
 com a opção do usuário e mostre o resultado para o usuário.
 */

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int opc;
  printf("Selecione uma opção\n");
  printf("1 - para converter de °C para °F\n");
  printf("2 - para converter de °F para °C: ");
  scanf("%d",&opc);
  float tempC;
  float tempF;
  switch (opc){
    case 1:
      printf("Entre com uma temperatura em °F: ");
      scanf("%f",&tempF);
      tempC = 5/9*(tempF-32);
      printf("%.2f °F equivale(m) a %.2f °C\n",tempF,tempC);
      break;
    case 2:
      printf("Entre com uma temperatura em °C: ");
      scanf("%f",&tempC);
      tempF = 1.8*tempC+32;
      printf("%.2f °C equivale(m) a %.2f °F\n",tempC,tempF);
    
    default:
      printf("A opção %d, não tem nenhuma função\n",opc);
  }
  return 0;
}