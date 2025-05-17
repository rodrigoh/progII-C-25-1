/**
 * Leia uma frase e conte os caracteres e os espaços que a frase contém, mostre as informações separadamente
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char palavra[50];
  printf("Entre com uma palavra ou frase: ");
  gets(palavra);
  int contVogal=0;
  int contEspaco=0;
  int i=0;
  for(;palavra[i]!='\0';i++){
    if(palavra[i]=='a' || palavra[i]=='e' || palavra[i]=='i' || palavra[i]=='o' || palavra[i]=='u')
      contVogal++;
    else if(palavra[i]==' ')
      contEspaco++;
  }
  printf("A string '%s' possui %d letras das quais %d são vogais e %d são espaços\n",palavra,i-contEspaco,contVogal,contEspaco);
  return 0;
}