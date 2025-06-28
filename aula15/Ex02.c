//Usar ponteiros para percorrer um array e somar seus elementos. Lembre-se que o nome de um array em C já é um ponteiro para o primeiro elemento.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  srand(time(NULL));
  int *p;
  p = malloc(10*sizeof(int));
  int i;
  int soma = 0;
  printf("\nDados no vetor\n");
  for(i=0;i<10;i++){
    *(p+i) = rand()%50;
    printf("%d ",*(p+i));
    soma+=p[i];
  }
  //p = realloc(p,20*sizeof(int));
  free(p);
  printf("\nA soma dos elementos em vetor vale %d\n",soma);
  return 0;
}