#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int cont = 10;
  while(cont<10){
    printf("%d ",cont);
    cont++;
  }
  printf("O mesmo exemplo com o do...while\n");
  //Mesmo exemplo com o do..while
  /*
  do..while x repeat...until
  Lembrando que diferente do pascal, o teste para finalizar o do..while é a condição passar a ser falsa. 
  Como o pascal é repita...até, a condição precisa passar a ser verdadeira para que ele encerre
  */
  do{
    printf("%d ",cont);
    cont++;
  }
  while(cont<10);
  return 0;
}