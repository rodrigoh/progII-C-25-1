/*
Jogo da Forca Simplificado: Crie um programa que implemente uma versão simplificada do jogo da forca. O programa deve:
Escolher uma palavra secreta de uma lista predefinida.
Mostrar ao jogador a palavra secreta com letras ocultas (por exemplo, "_____").
Permitir que o jogador chute uma letra por vez.
Atualizar a exibição da palavra secreta mostrando as letras corretas chutadas.
Manter o controle do número de tentativas restantes.
Informar ao jogador se ele acertou a palavra ou perdeu.
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  srand(time(NULL));
  //Lista de palavras
  char palavras[14][15] = {"casa","carro","livro","cadeira","porta","janela","computador","terra","estrela","tempo","forte","triste", "tela", "telefone"};
  char palavra[15];
  //Sorteando uma palavra
  int posicao = rand()%15;
  //Descobrir o tamanho da palavra e gerando a máscara
  int tamanho = 0;
  for(;palavras[posicao][tamanho]!='\0';tamanho++){
    palavra[tamanho] = '_';
  }
  int chances = 6;
  int letrasRestantes = tamanho;
  char letra;
  printf("\nUma palavra de %d letras, aperte enter para iniciar\n",tamanho);
  getchar();
  while(chances>0 && letrasRestantes>0){
    system("cls");
    for(int i=0;palavra[i]!='\0';i++){
      printf("%c ",palavra[i]);
    }
    setbuf(stdin,NULL);
    printf("\n\nEscolha uma letra: ");
    scanf("%c",&letra);
    //Procurando a letra na palavra
    int achei = 0;
    for(int i=0;palavra[i]!='\0';i++){
      if(palavras[posicao][i]==letra){
        achei=1;
        palavra[i] = letra;
        letrasRestantes--;
      }
    }
    if(achei==0){
      chances--;
      printf("\nA palavra não tem a letra %c, restam %d chances\n",letra, chances);
      getchar();
    }
    if(chances==0){
      printf("\nVocê perdeu, apalavra era %s!\n",palavras[posicao]);
    }
    else if(letrasRestantes==0){
      system("cls");
      printf("%s",palavra);
      printf("\nVocê venceu!!!!");
    }
    printf("\nAperte enter para continuar");
    getchar();  
  }
  return 0;
}