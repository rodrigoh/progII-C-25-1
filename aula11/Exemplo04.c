#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int fatorial(int n){
  if(n==1)
    return 1;
  else
    return fatorial(n-1)*n;
}

int somaRecursiva(int n){
  if(n==1)
    return 1;
  else
    return somaRecursiva(n-1)+n;
}

int fibonacci(int n){
  if(n==0)
    return 0;
  else if(n==1)
    return 1;
  else
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  printf("5! = %d\n",fatorial(10));
  printf("A soma dos números de 1 a 5 vale %d\n",somaRecursiva(5));
  printf("\nSequência Fibonacci\n");
  for(int i=0;i<10;i++){
    printf("%d ",fibonacci(i));
  }
  return 0;
}