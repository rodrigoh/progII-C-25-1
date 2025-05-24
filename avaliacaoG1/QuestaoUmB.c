#include <stdio.h>
int main() {
  int a = 10;
  int b = 5;
  if (a++ <= 10)
    b = ++a - 5 + b;
  else if (--b >= 4)
    a *= a;
  //printf("a = %d, b = %f\n", a, b);
  //Correção
  printf("a = %d, b = %d\n", a, b);
  return 0;
}
