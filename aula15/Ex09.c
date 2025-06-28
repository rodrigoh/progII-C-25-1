#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

typedef struct{
  char nome[100];
  double salario;
} Funcionario;

typedef struct{
  char nome[100];
  int nFuncionarios;
  Funcionario *lista;
} Empresa;

Funcionario cadastraFuncionario(){
  Funcionario funcionario;
  setbuf(stdin,NULL);
  printf("Digite o nome do funcionário: ");
  fgets(funcionario.nome, sizeof(funcionario.nome),stdin);
  //Removendo o \n do final...
  int pos = strcspn(funcionario.nome, "\n");
  funcionario.nome[pos] = '\0';
  setbuf(stdin,NULL);
  printf("Qual o salário do %s R$",funcionario.nome);
  scanf("%lf",&funcionario.salario);
  return funcionario;
}

void mostraFuncionario(Funcionario funcionario){
  printf("Nome: %s\n",funcionario.nome);
  printf("Salário R$ %.2f\n",funcionario.salario);
}

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  Empresa empresa;
  printf("Qual o nome da empresa: ");
  fgets(empresa.nome,sizeof(empresa.nome),stdin);
  empresa.nome[strcspn(empresa.nome,"\n")] = '\0';
  //Removendo o \n do final...
  setbuf(stdin,NULL);
  empresa.nFuncionarios = 0;
  int resposta;
  do{
    printf("\nBem vindo a %s\n",empresa.nome);
    printf("\n1 - cadastrar um novo funcionário");
    printf("\n2 - para listas os funcionários");
    printf("\n3 - sair:");
    setbuf(stdin,NULL);
    scanf("%d", &resposta);
    if(resposta==1){
      setbuf(stdin,NULL);
      printf("Cadastrando o %d° funcionário\n",empresa.nFuncionarios+1);
      if(empresa.nFuncionarios==0){
        empresa.lista = malloc(sizeof(Funcionario));
      }
      else{
        empresa.lista = realloc(empresa.lista, sizeof(Funcionario)*(empresa.nFuncionarios+1));
      }
      empresa.lista[empresa.nFuncionarios] = cadastraFuncionario();
      empresa.nFuncionarios++;
    }
    else if(resposta==2){
      for(int i=0;i<empresa.nFuncionarios;i++){
        printf("%d° funcionário\n",i+1);
        mostraFuncionario(empresa.lista[i]);
        printf("--------------------\n");
      }
    }
  }
  while(resposta!=3);
  return 0;
}