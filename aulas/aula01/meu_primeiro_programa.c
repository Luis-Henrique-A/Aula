/*
Construa um programa calcule a soma de dois números inteiros
*/
#include <stdio.h>

int main(){
  int a, b, soma;
  printf("Digite o primeiro número: ");
  scanf("%d", &a);
  printf("Digite o segundo número: ");
  scanf("%d", &b);
  soma = a + b;
  printf("A soma dos números é: %d", soma);
  return 0;
}