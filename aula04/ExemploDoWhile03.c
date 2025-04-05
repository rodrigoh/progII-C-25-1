#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

//Quando usamos do..while a variável vai receber um valor antes de ser testada
int main(){
  SetConsoleOutputCP(65001);
  system("cls");
  int nota;
  do{
    printf("Digite uma nota entre 1 e 10: ");
    scanf("%d",&nota);
  }
  while(nota<1 || nota>10);
  printf("A nota é %d\n",nota);
  return 0;
}


//Quando usamos um while a variável precisa inicializada, já que o teste ocorre no início
// int main(){
//   SetConsoleOutputCP(65001);
//   system("cls");
//   int nota=0;
//   while(nota<1 || nota>10){
//     printf("Digite uma nota entre 1 e 10: ");
//     scanf("%d",&nota);
//   }
//   printf("A nota é %d\n",nota);
//   return 0;
// }