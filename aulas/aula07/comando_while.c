#include <stdio.h>

int main(){
    int numero = 0;

    printf("entre com um numero de 1 a 10: ");
    scanf("%i", &numero);

    while(numero < 1 || numero > 10){
        printf("Numero invalido. tente novamente\n");
        printf("entre com um numero de 1 a 10: ");
        scanf("%i", &numero);
        while(getchar() != '\n'); //limpar o buffer do teclado 
    }
    
    int i = 0;
    while(i < numero){
        printf("%i\n", i);
        i++;
    }

    return 0;
}