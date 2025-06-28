#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

int main(){
  SetConsoleOutputCP(65001);
  char palavraUm[50];
  char palavraDois[50];

  printf("Digite uma palavra: ");
  scanf("%s", palavraUm);
  printf("Digite outra palavra: ");
  scanf("%s", palavraDois);

  int compara = strcmp(palavraUm,palavraDois);
  printf("%d\n",compara);
  if(compara<0){
    printf("A ordem das palavras é %s, %s\n",palavraUm,palavraDois);
  }
  else if(compara>0){
    printf("A ordem das palavras é %s, %s\n",palavraDois,palavraUm);
  }
  else{
    printf("As palavras são iguais");
  }

  return 0;
}