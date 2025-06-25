/*
Crie uma função que receba	como parâmetros dois vetores de inteiros: x1 e x2 
e as suas respectivas quantidades de elementos: n1 e n2. A função deverá 
retornar um ponteiro para um terceiro vetor, x3, alocado dinamicamente, 
contendo a intersecção de x1 e x2 e usar o ponteiro qtd para retornar o 
tamanho de x3.
Sendo 
x1 = {1, 3, 4, 7, 9} e 
x2 = {1, 5, 7, 9}, os valores em x3 seriam {1, 7, 9}
Assinatura da função:
*/
#include<stdio.h>
#include<stdlib.h>

int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd){
  int *vi;
  
  int cont = 0;
  for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
      if(x1[i]==x2[j]){
        if(i==0){
          vi = malloc(sizeof(int));
        }
        else{
          vi = realloc(vi, sizeof(int)*cont+1);
        }
        vi[cont] = x1[i];
        cont++;
      }
    }
  }
  *qtd = cont;
  return vi;
}

int main(){
  int x1[] = {1, 3, 4, 7, 9};
  int x2[] = {1, 5, 7, 9};

  int *p;
  int cont;
  p = interseccao(x1, x2, 5, 4, &cont);
  for(int i=0;i<cont;i++){
    printf("%d ",p[i]);
  }
  printf("\n");
  return 0;
}