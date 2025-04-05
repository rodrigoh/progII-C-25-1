#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  //Operadores relacionais
  // <, >, <=, >=, ==, != (não igual)
  //Como o c não implementa por padrão, usamos 1 e 0.
  // nível alto (true) -> 1
  // nível baixo (false) -> 0
  //Operadores lógicos
  //E lógico -> && comparação normal
  //E bit a bit -> &
  //OU lógico -> || comparação normal
  //OU bit a bit -> |
  //Não lógico -> !

  int numero;
  printf("Digite um número: ");
  scanf("%d",&numero);

  if(numero==0)
    printf("O número vale zero\n");
  else if(numero>0){
    printf("O número %d é positivo\n",numero);
    printf("Outra instrução para justificar as chaves...");
  }
  else
    printf("O número %d é negativo\n",numero);

  //Limpar o buffer do teclado para conseguir ler um caracter
  setbuf(stdin,NULL);
  char letra;
  printf("Informe uma letra: ");
  scanf("%c",&letra);
  switch(letra){
    case 'a':
    case 'A':
      printf("A letra é A\n");
      break;
    case 'b':
    case 'B':
      printf("A letra é B\n");
      printf("\nNo case, se tiver mais comandos, não precisa de {}");
      break;
    case 'c':
    case 'C':
      printf("A letra é C\n");
      break;
    case 'd':
    case 'D':
      printf("A letra é D\n");
    default: //É opcional
      printf("A letra não está correta\n");
  }
  return 0;
}