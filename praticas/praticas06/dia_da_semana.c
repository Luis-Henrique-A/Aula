#include <stdio.h>

int main(){
    int dia = 0;
    printf("Coloque um numero e informaremos o dia: ");
    scanf("%i", &dia);

    switch(dia){
        case(1): printf("Domingo"); break;
        case(2): printf("Segunda Feira"); break;
        case(3): printf("Terça Feira"); break;
        case(4): printf("Quarta Feira"); break;
        case(5): printf("Quinta Feira"); break;
        case(6): printf("Sexta Feira"); break;
        case(7): printf("Sabado"); break;
        default: printf("Dia invalido");
    }

    return 0;
}