/** 
7 - Leia uma matriz de 5x5 elementos. Calcule a soma dos elementos que estão na diagonal principal.

8 - Leia uma matriz de 5x5 elementos. Calcule a soma dos elementos que estão acima da diagonal principal.
Leia uma matriz de 5x5 elementos. Calcule a soma dos elementos que estão abaixo da diagonal principal.
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int matriz[5][5];
  int somaD = 0;
  int somaAD = 0;
  int somaBD = 0;
  for(int l=0;l<5;l++){
    for(int c=0;c<5;c++){
      printf("matriz[%d][%d]: ",l,c);
      scanf("%d",&matriz[l][c]);
      if(l==c){
        somaD+=matriz[l][c];
      }
      else if(l<c){
        somaAD+=matriz[l][c];
      }
      else{
        somaBD+=matriz[l][c];
      }
    }
  }
  printf("A soma dos elementos\n");
  printf("Na diagonal vale %d\n",somaD);
  printf("Acima da diagonal vale %d\n",somaAD);
  printf("Abaixo da diagonal vale %d\n",somaBD);

  return 0;
}