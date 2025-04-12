#include<stdio.h>
//Necessária para função rand()
#include<stdlib.h>
#include<windows.h>
#include<time.h>


int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  //Inicializando a função rand() com o time do pc
  srand(time(NULL));
  //Gerando um inteiro aleatório
  for(int i=0;i<10;i++){
    int numero = rand()%100;
    printf("%d ",numero);
  }
  return 0;
}