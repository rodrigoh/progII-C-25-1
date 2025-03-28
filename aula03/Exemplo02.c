#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  int a = 82;
  int b = 16;
  int c = a & b;
  printf("A comparação bit a bit entre 82 e 16 vale %d\n",c);
  return 0;
}