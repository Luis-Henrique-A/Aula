#include <stdio.h>

int main(){
    int numero, maior, menor;

    printf("Insira um numero: ");
    scanf("%i", &numero);

    while(numero != 0){
        printf("Insira um numero: ");
        scanf("%i", &numero);

        if(numero > maior){
            maior = numero;
            printf("%i eh maior que %i\n", maior, numero);
        } else if(numero < menor){
            menor = numero;
            printf("%i eh menor que %i\n", menor, numero);
        } else{
            printf("O numero eh igual\n");
        }
    }

    return 0;
}