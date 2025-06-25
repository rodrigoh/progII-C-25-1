#include<stdio.h>
#include<stdlib.h>

int main(){
  system("clear");
  int *p;
  int valor;
  p = &valor;
  *p = 10;
  printf("O valor da variável valor é %d\n",valor);
  printf("O valor para onde p aponta é %d\n",*p);
  printf("O endereço de memória de p é %p\n",p);
  return 0;
}