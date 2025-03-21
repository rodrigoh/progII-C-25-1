#include<stdio.h>
#include<windows.h>

//void main()
int main(){
  SetConsoleOutputCP(65001);
  //\n => quebra de linha
  //\t => tabulação (espaço desde a margem)
  //\r => retorno
  printf("Estou escrevendo na tela em C\n");
  //int numerointeiro
  //int numero_inteiro
  //Criar uma variável inteira
  int numeroInteiro = 12;
  //Imprimir na tela
  printf("O valor da variável inteira é %d\n",numeroInteiro);
  //Variável real
  //É possível associar um float a um double, por exemplo 
  //double n;
  //float t;
  //n=t
  //Porém o contrário não é possível já que o double ocupa o dobro de memória
  float numeroFloat = 12.56;
  double numeroDouble = 10.5;
  printf("O valor do número float é %f, que limitando número de casas dicimais fica %.2f. O número double vale %f\n",numeroFloat, numeroFloat, numeroDouble);
  //O tipo char pode armazenar caracteres
  char letra = 'a';
  char valor = '9';
  printf("A letra vale %c e o valor vale %c. Também é possível imprimir o valor ASCII, por exemplo o 'a' é 97 %c\n",letra,valor,97);
  //Usando a função puchar
  putchar('a');
  putchar('\n');
  putchar(98);
  //O & comercial permite obter o endereço de memória de uma variável
  printf("O endereço de memória da variável numeroInteiro é %p\n",&numeroInteiro);
  return 0;
}
