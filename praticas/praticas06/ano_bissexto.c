#include <stdio.h>

int main(){
    int ano = 0;
    printf("Digite um ano para verificar se ele e bissexto: ");
    scanf("%i", &ano);

    int multiplo_de_4 = ano % 4 == 0;
    int multiplo_de_100 = ano % 100 == 0;
    int multiplo_de_400 = ano % 400 == 0;

    if(!multiplo_de_100 && multiplo_de_4 || multiplo_de_400){
        printf("%i e bissexto", ano);
    } else{
        printf("%i nao e bissexto", ano);
    }

    return 0;
}