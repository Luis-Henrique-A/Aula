#include <stdio.h> //biblioteca entrada e saida

int main(){
  //funcao printf imprime
  //texto
  printf("Um texto sempre entre aspas duplas\n");

  //numeros inteiros
  printf("%i\n", 10);
  printf("%i\n%i\n", 11, 22);
  printf("%5i\n" , 115);
  printf("05i\n", 1);

  //numeros decimais
  printf("%f\n", 10.5174927);
  printf("%10\n%10.2f", 10.3709, 10.3789);

  //carcatere entre aspas simples
  printf("&c\n" , 'A');
  printf("sc\n", 68);

  //um string
  printf("%s\n", "Bom Dia!");
  printf("%30s!\n", "Para frente");
  printf("%-30s!\n", "Para tras :]");
  return 0;
}