/**
 * Crie um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral. Em seguida conte quantos 
 * alunos estão acima da média calculada.
 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(){
  system("cls");
  SetConsoleOutputCP(65001);
  float notas[15];
  float soma = 0;
  float media;
  int contAcima = 0;
  for (int i = 0; i < 15; i++){
    printf("Informa a nota do %d° aluno: ",i+1);
    scanf("%f",&notas[i]);
    soma+=notas[i];
  }
  media = soma/15;
  for (int i = 0; i < 15; i++){
    if(notas[i]>media)
      contAcima++;
  }
  printf("Estão acima da média %.2f, %d alunos\n",media,contAcima);
  return 0;
}
  
