#include<stdio.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  int i = 10;
  printf("%d ",++i);
}
