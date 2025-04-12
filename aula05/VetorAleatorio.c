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
  int vetor[100];
  for(int i=0;i<100;i++){
    vetor[i] = rand()%1000;
    printf("%d ",vetor[i]);
  }
  return 0;
}