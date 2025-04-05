/*
 * Localização de Ponto no Plano Dados um par de valores X, Y, que representam as coordenadas de um ponto no plano cartesiano, determinar a localização do ponto, 
 * se em um quadrante, um dos eixos ou na origem.
 */
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int x,y;
  printf("Entre com o valor de x: ");
  scanf("%d",&x);
  printf("Entre com o valor de y: ");
  scanf("%d",&y);
  if(x>0 && y>0)
    printf("O ponto formado pelas coordenadas (%d, %d) está no primeiro quadrante do plano\n",x,y);
  else if(x<0 && y<0)
    printf("O ponto formado pelas coordenadas (%d, %d) está no segundo quadrante do plano\n",x,y);
  else if(x<0 && y<0)
    printf("O ponto formado pelas coordenadas (%d, %d) está no terceiro quadrante do plano\n",x,y);
  else if(x>0 && y<0)
    printf("O ponto formado pelas coordenadas (%d, %d) está no quarto quadrante do plano\n",x,y);
  else
    printf("O ponto formado pelas coordenadas (%d, %d) está na origem do plano\n",x,y);
  return 0;
}