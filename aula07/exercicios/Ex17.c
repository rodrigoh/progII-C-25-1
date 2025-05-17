/**
 * Ler duas Strings e juntar elas em uma terceira, em seguida mostre a nova string na tela
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//     0123456
//p1 = aula de 
//     0123456789
//p2 = programcao 
//     0123456789..
//p3 = aula de programcao
int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char p1[25];
  char p2[25];
  char p3[50];
  int cp3 = 0;
  printf("Entre com a primeira string: ");
  gets(p1);
  printf("Entre com a segunda string: ");
  gets(p2);
  //Adicionando p1 a p3
  for(int i=0;p1[i]!='\0';i++){
    p3[cp3] = p1[i];
    cp3++;
  }
  //Adicionando p2 a p3
  for(int i=0;p2[i]!='\0';i++){
    p3[cp3] = p2[i];
    cp3++;
  }
  printf("A jusção de '%s' e '%s' fica '%s'\n",p1,p2,p3);

  return 0;
}