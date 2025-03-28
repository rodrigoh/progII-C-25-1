#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int dia;
  printf("Escolha um dia da semana de 1 a 7: ");
  scanf("%d",&dia);
  //swtich(variavel){}
  switch(dia){
    case 1:
      printf("É domingo");
    break;
    case 2:
      printf("É segunda-feira");
    case 3:
      printf("É terça-feira");
    break;
    case 4:
      printf("É quarta-feira");
    break;
    case 5:
      printf("É quinta-feira");
    break;
    case 6:
      printf("É sexta-feira");
    break;
    case 7:
      printf("É sábado");
    break;
    default:
      printf("O número %d não corresponde a nenhum dia\n",dia);
  }

  return 0;
}