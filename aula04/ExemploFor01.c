#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  //C for(inicialização; condição; passo)
  //python for cont in range(valorInicial, valorFinal, passo)
  //pascal for i:=0 to 10 do
  int cont;
  for(cont=0;cont<=10;cont++)
    printf("%d ",cont);

  printf("\nO valor final de cont é %d\n",cont);
  return 0;
}