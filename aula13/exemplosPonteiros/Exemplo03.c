#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int *p;
  int quant = 4;
  p = (int*) calloc(quant,sizeof(int));
  int cont =0;
  char opc;
  do{
    if(cont==quant){
      quant = quant*2;
      realloc(p,quant);
    }
    printf("Digite um número: ");
    scanf("%d",p+cont);
    cont++;
    setbuf(stdin,NULL);
    printf("Continuar (s - sim / n = não): ");
    scanf("%c",&opc);
  }
  while(opc=='s');
  for(int i=0;i<cont;i++){
    printf("%d ",*(p+i));
  }
  return 0;
}