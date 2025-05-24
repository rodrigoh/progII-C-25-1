#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  srand(time(NULL));
  char letras[20];
  for (int i = 0; i < 20; i++) {
    letras[i] = rand() % 26 + 65;
    printf("%c", letras[i]);
  }
  printf("\n");
  return 0;
}
