#include<stdio.h>

int main(){
  int i = 8;
  int j = i++ / 2;
  int k = --i + j++ * 3;
  int l = (i + j) - k % 2;

  if (l > 10)
    i = k++ * l;
  if (i % 3 == 0)
    j += i / 3;
  else
    j -= i * 2;
  if (l < 0) {
    i -= k / l;
    if (i < 0) 
      k += l * i;
    else 
      k -= l - i;
  }
  else
      i = j + k - l;
  printf("i=%d, j=%d\n",i,j);
  printf("k=%d, l=%d\n",k,l);
  return 0;
}
