#include <stdio.h>
int main() {
  int m = 7;
  int n = m * 2;
  int o = --m + n++ / 3;
  int p = m + n - o * 2;
  if (p % 3 == 0) {
    m = o-- - p;
    if (m > 0)
      n += m * 2;
    else
      n = m / 2;
  } 
  else if (p % 2 == 0){
    m += o / p;
    if (m < 0)
      o += p + m;
    else
      o = p - m;
  }
  else
    m *= n + o - p;
  printf("m=%d, n=%d\n",m,n);
  printf("o=%d e p=%d\n",o,p);
  return 0;
}
