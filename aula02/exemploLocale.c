#include<stdio.h>
#include<windows.h>
//Biblioteca necessária para configurar o locale
#include<locale.h>

int main(){
  SetConsoleOutputCP(65001);
  //Configurando para que todos as opções regionais sejam aplicadas, com as "", faz com que o compilador "pergunte" ao SO qual a localização definida
  setlocale(LC_ALL,"");
  float valor = 12.34;
  printf("%.2f\n",valor);
  return 0;
}