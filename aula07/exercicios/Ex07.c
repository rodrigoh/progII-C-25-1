/**
 * Faça um programa que conte o número de 1’s que aparecem em um string. Exemplo: “0011001” → 3
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char binario[20];
  printf("Entre com um número em formato binário, exemplo \"0011001\": ");
  scanf("%s",binario);
  int contUm = 0;
  for(int i=0;binario[i]!='\0';i++)
    if(binario[i]=='1')
      contUm++;
  printf("O número binário %s tem %d bits ligados\n",binario,contUm);
  return 0;
}