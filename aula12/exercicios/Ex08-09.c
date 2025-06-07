/*
Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio, um número de 1 até 6

Use a função da questão passada e lance o dado 1 milhão de vezes. Conte quantas vezes cada número saiu. A probabilidade deu certo? Ou seja, a porcentagem dos números foi parecida?

*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int dado(){
  return rand()%6;
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));
  int lancamentos = 1000000;
  //Face 1 = 0
  //Face 6 = 5
  int vetor[6] = {0,0,0,0,0,0};
  for(int i=0;i<lancamentos;i++){
    //printf("%d ",dado());
    int face = dado();
    vetor[face]++;
  }
  //Calcular os resultados
  for(int i=0;i<6;i++){
    float p = ((float)vetor[i]/lancamentos)*100;
    printf("A face %d do dado for sorteada %d vezes o que representa %.2f %% das vezes\n",i+1, vetor[i],p);
  }
  return 0;
}