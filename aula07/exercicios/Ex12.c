/**
 * Leia uma string e em seguida uma letra, remova todas as ocorrências desse caracter da string
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  char palavra[50];
  char aux[50];
  printf("Informe uma string: ");
  gets(palavra);
  char letra;
  setbuf(stdin,NULL);
  printf("Da string '%s' qual letra devo remover: ",palavra);
  scanf("%c",&letra);
  int cont=0;
  for(int i=0;palavra[i]!='\0';i++){
    if(palavra[i]!=letra){
      aux[cont] = palavra[i];
      cont++;
    }
  }
  //aux[cont] = '\0';
  printf("A string sem a letra '%c' fica %s\n",letra,aux);
  return 0;
}