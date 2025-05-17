#include<stdio.h>
#include<windows.h>

int main(){
  char palavra[20];
  SetConsoleOutputCP(65001);
  printf("Digite uma palavra: ");
  scanf("%s",palavra);
  int tamanho;
  for(tamanho=0;palavra[tamanho]!='\0';tamanho++);
  int ePalindro = 1;
  for(int i=0;i<tamanho/2;i++){
    if(palavra[i]!=palavra[tamanho-i-1])
      ePalindro = 0;
  }
  if(ePalindro==1){
    printf("É palindromo");
  }
  else{
    printf("Não é palíndromo");
  }
  return 0;
}