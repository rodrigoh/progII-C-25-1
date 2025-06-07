#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

typedef struct{
  char nome[50];
  char matricula[10];
  float notas[3];
  int faltas;
  char status;
} Aluno;

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  Aluno lista[2];
  for(int i=0;i<2;i++){
    setbuf(stdin,NULL);
    printf("Lendo dados do aluno %d\n",i+1);
    printf("Qual o nome do aluno: ");
    gets(lista[i].nome);
    setbuf(stdin,NULL);
    printf("Qual a matrícula: ");
    scanf("%s",lista[i].matricula);
    float soma = 0;
    for(int j=0;j<3;j++){
      printf("Entre com a %d° nota do aluno ",j+1);
      scanf("%f",&lista[i].notas[j]);
      soma+=lista[i].notas[j];
    }
    printf("Número de faltas: ");
    scanf("%d",&lista[i].faltas);
    float media = soma/3;
    //Total é 40 enconstros 75% de presença = 30 então pode ter até 10 faltas
    if(media>=8 && lista[i].faltas<10)
      lista[i].status = 'A';
    else
      lista[i].status = 'R';
  }
  for(int i=0;i<2;i++){
    printf("Nome: %s\n",lista[i].nome);
    printf("Matrícula: %s\n",lista[i].matricula);
    for(int j=0;j<3;j++){
      printf("N%d = %.2f\n",j+1,lista[i].notas[j]);
    }
    if(lista[i].status=='A'){
      printf("Ele está aprovado\n");
    }
    else{
      printf("Ele está reprovado\n");
    }
  }
  return 0;
}