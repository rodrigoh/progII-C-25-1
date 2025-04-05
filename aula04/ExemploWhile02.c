#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char opc = 's';
  while(opc=='s'){
    //Todo o programa
    setbuf(stdin,NULL);
    printf("Deseja continuar (s - sim, n - não): ");
    scanf("%c",&opc);
  }
  return 0;
}