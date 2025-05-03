/**
 * Declare duas strings com capacidade para 20 caracteres. Leia pela entrada padrão a primeira string. 
 * Em seguida, copie o texto da primeira string para a segunda. Imprima no final o conteúdo das duas strings.
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char p1[20];
  char p2[20];
  printf("Entre com um string: ");
  gets(p1);
  for(int i=0;i<20;i++){
    p2[i] = p1[i];
  }
  printf("A String p1 vale '%s' e a p2 vale '%s'\n",p1,p2);
  return 0;
}