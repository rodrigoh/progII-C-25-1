/**
 * Carregar uma matriz SOMA 4x4, calcular e escrever as seguintes somas: 
a) da linha de índice 3 
b) da coluna de índice 2 
c) de todos os elementos da matriz  
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));
  int soma[4][4];
  int somaLinha3 = 0;
  int somaColuna2 = 0;
  int somaTotal = 0;
  for(int l=0;l<4;l++){
    for(int c=0;c<4;c++){
      soma[l][c] = rand()%50;
      printf("%02d ",soma[l][c]);
      if(l==3){
        somaLinha3+=soma[l][c];
      }
      if(c==2){
        somaColuna2+=soma[l][c];
      }
      somaTotal+=soma[l][c];
    }
    printf("\n");
  }
  printf("As somas valem\n");
  printf("Da linha 3 = %d\n",somaLinha3);
  printf("Da coluna 2 = %d\n",somaColuna2);
  printf("De todos os elementos = %d\n",somaTotal);
  return 0;
}
