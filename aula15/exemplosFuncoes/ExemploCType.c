#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>


int main(){
  SetConsoleOutputCP(65001);
  char letra = 'a';
  char numero = '9';
  char controle = '\0';
  //char simbolo = '#';
  //As funções retornar um valor > 0 para verdadeiro e 0 para falso
  printf("O caractere %c é um alpha numérico %d\n",letra,isalpha(letra));
  printf("O caractere %c é um alpha numérico %d\n",controle,isalpha(controle));
  printf("O caractere %c é um número %d\n",numero,isdigit(numero));
  printf("O caractere %c é um número %d\n",letra,isdigit(letra));
  printf("O caractere %c é imprimível %d\n",numero,isprint(numero));
  printf("O caractere %c é imprimível %d\n",letra,isprint(controle));
  return 0;
}