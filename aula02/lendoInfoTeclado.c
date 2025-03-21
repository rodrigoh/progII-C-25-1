#include<stdio.h>
#include<windows.h>

int main(){
  //Acertando a saída do terminal para ser utf8
  SetConsoleOutputCP(65001);
  //Enviando um comando para o terminal para limpar a tela no cmd é cls, no Linux é clear
  system("cls");
  int numero;
  //Lendo um número inteiro do teclado
  printf("Digite um número inteiro: ");
  scanf("%d",&numero);
  printf("O valor digitado foi %d\n",numero);
  //Ler um número real do teclado
  float numeroReal;
  printf("Entre com um número real: ");
  scanf("%f",&numeroReal);
  printf("O número real é %.2f\n",numeroReal);
  //Apagando o buffer de entrada do teclado (necessário para remover o enter que ficou armazenado)
  setbuf(stdin,NULL);
  //Lendo uma letra do teclado
  char letra;
  printf("Digite uma letra: ");
  scanf("%c",&letra);
  printf("A letra digitada foi %c\n",letra);
  int hora, minuto;
  printf("Entre com a hora e o minuto: ");
  scanf("%d:%d",&hora, &minuto);
  printf("A hora é %d:%d\n",hora,minuto);
  setbuf(stdin,NULL);
  printf("Digite uma letra: ");
  letra = getchar();
  //Digita pause no terminal e faz ele ficar parado esperando
  system("pause");
  return 0;
}