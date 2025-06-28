#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  int numero;
  printf("Digite um número: ");
  scanf("%d",&numero);
  int numeroSemSinal = abs(numero);
  printf("O número digitado é %d e seu valor absoluto é %d\n",numero,numeroSemSinal);
  return 0;
}
