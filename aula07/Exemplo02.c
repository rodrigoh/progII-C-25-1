#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));
  //Criando uma matriz quadrada
  int matriz[5][5];
  for(int l=0;l<5;l++){
    for(int c=0;c<5;c++){
      matriz[l][c] = rand()%50;
      printf("%02d ",matriz[l][c]);
    }
    printf("\n");
  }
  printf("Elementos na diagonal da matriz\n");
  for(int l=0;l<5;l++){
    for(int c=0;c<5;c++){
      if(l==c){
        printf("%d ",matriz[l][c]);
      }
    }
  }
  printf("\nElementos na diagonal da matriz (usando apenas um for)\n");
  for(int i=0;i<5;i++){
    printf("%d ",matriz[i][i]);
  }
  printf("\nElementos na diagonal secundária\n");
  for(int l=0;l<5;l++){
    for(int c=0;c<5;c++){
      if(l+c==4)
        printf("%d ",matriz[l][c]);
    }
  }
  return 0;
}
