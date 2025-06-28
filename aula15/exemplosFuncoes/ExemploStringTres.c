#include<stdio.h>
#include<string.h>
#include<windows.h>

int main() {
  SetConsoleOutputCP(65001);
  char str1[] = "Rodrigo\n";
  int pos = strcspn(str1, "\n");
  printf("Posição do \\n: %d\n", pos);
  return 0;
}