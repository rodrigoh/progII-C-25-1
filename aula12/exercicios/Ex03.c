/*

Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac'
Usando as 3 funções acima, crie um aplicativo que calcula as raízes de uma equação do 2o grau: ax² + bx + c=0
Para ela existir, o coeficiente 'a' deve ser diferente de zero.
Caso o delta seja maior ou igual a zero, as raízes serão reais. Caso o delta seja negativo, as reais serão complexas, apenas informe que não existem raízes racionais 

Ex: 2x² + 4x - 6=0 tem raízes 1 e -3

 */
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>

float calculaDelta(float a, float b, float c){
  float delta = b*b-4*a*c;
  return delta;
}

float calculaX(float a, float b, float d, char op){
  float x;
  if(op=='+'){
    x = (-b+sqrt(d))/(2*a);
  }
  else{
    x = (-b-sqrt(d))/(2*a);
  }
  return x;
}

int main(){
  float a,b,c,d;
  SetConsoleOutputCP(65001);
  system("cls");
  printf("Dada a equação ax² + bx + c = 0 informe\n");
  printf("a: ");
  scanf("%f",&a);
  printf("b: ");
  scanf("%f",&b);
  printf("c: ");
  scanf("%f",&c);

  d = calculaDelta(a,b,c);
  if(d>=0){
    float x1 = calculaX(a,b,d,'+');
    float x2 = calculaX(a,b,d,'-');
    printf("As raízes da equação são\n");
    printf("x' = %.2f\n",x1);
    printf("x\" = %.2f\n",x2);
  }
  else{
    printf("A equação não possui raizes no conjunto dos reais");
  }
  return 0;
}