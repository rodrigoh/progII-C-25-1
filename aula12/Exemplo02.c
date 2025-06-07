#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

struct Aluno{
  char nome[50];
  char matricula[10];
  float notas[3];
  int faltas;
  char status;
};

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  struct Aluno alunoUm;
  //Podemos inicializar nossa instância já com valores...
  struct Aluno alunoDois = {"Jonas Silva", "a261",{8,6,7},7,'A'};

  printf("Qual o nome do primeiro aluno: ");
  scanf("%s",alunoUm.nome);
  printf("Qual a matrícula do %s:",alunoUm.nome);
  scanf("%s",alunoUm.matricula);
  float soma = 0;
  for(int i=0;i<3;i++){
    printf("Qual a %d° nota do aluno: ",i+1);
    scanf("%f",&alunoUm.notas[i]);
    soma+= alunoUm.notas[i];
  }
  printf("Qual a quantidade de faltas: ");
  scanf("%d",&alunoUm.faltas);
  float media = soma/3;
  if(media>=8 && alunoUm.faltas<10)
    alunoUm.status = 'A';
  else
    alunoUm.status = 'R';

  printf("O aluno %s tem as seguintes informações\n",alunoUm.nome);
  printf("Matrícula - nome: %s - %s\n",alunoUm.matricula, alunoUm.nome);
  printf("Média %.2f\n",media);
  if(alunoUm.status=='A'){
    printf("E está aprovado\n");
  }
  else{
    printf("E está reprovado");
  }
  //Como o alunoDois já tem todas as informações, podemos apenas imprimir as info na tela...
  printf("Aluno 2: %s\n",alunoDois.nome);
  printf("N1: %.2f\n",alunoDois.notas[0]);
  return 0;
}