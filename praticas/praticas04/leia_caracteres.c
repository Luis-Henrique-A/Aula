#include <stdio.h>

int main(){
  char tecla = '\0';

  printf("Digite uma tecla: ");
  scanf("%c", &tecla);
  printf("você digitou: %c\n", tecla);

  char nome[31];

  printf("digite seu nome: ");
  getchar();
  scanf("%[^\n]s", nome);
  printf("você digitou : %s\n", nome);

  return 0;
}