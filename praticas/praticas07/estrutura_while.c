#include <stdio.h>

int main(){
    int nota = 0;

    printf("Insira a nota: ");
    scanf("%i", &nota);

    while(nota < 1 || nota > 10){
        printf("Nota invalida, tente novamente");
        scanf("%i", &nota);
    }
    printf("Nota valida ;)");

    return 0;
}