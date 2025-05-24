#include <stdio.h>
int main() {
  int i;
  int vetor[10];
  int vetorDois[10];
  for(i = 0; i < 10; i++)
    vetor[i] = i + 1;
  for(int j = 0; j < 10; j++)
    vetorDois[j] = vetor[--i];
  printf("Dados no vetor...\n");
  for(i = 0; i < 10; i++)
    printf("%d ", vetor[i]);
  printf("\nDados no vetorDois...\n");
  for(i = 0; i < 10; i++)     
    printf("%d ", vetorDois[i]);
  return 0;
}
