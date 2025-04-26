/**
 * Leia uma sequência qualquer de 10 caracteres, armazene em um vetor, depois, leia outro caractere do teclado, 
 * e conte quantas vezes ele aparece no vetor
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  char letras[10];
  char letraBusca;
  for (int i = 0; i < 10; i++){
    setbuf(stdin,NULL);
    printf("Digite uma letra para letras[%d]: ",i);
    scanf("%c",&letras[i]);
  }
  setbuf(stdin,NULL);
  printf("Qual letra devo contar na string: ");
  scanf("%c",&letraBusca);
  int cont = 0;
  for (int i = 0; i < 10; i++){
    if(letras[i]==letraBusca)
      cont++;
  }
  printf("A letra %c aparece %d vezes na string\n",letraBusca,cont);
  
  return 0;
}