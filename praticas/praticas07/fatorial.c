#include <stdio.h>

int main(){
    int numero = 0;
    int fatorial = 1;

    printf("Insira um numero para obter seus fatoriais: ");
    scanf("%i", &numero);

    for(int i=numero; i>0; i--){
        fatorial = fatorial * i;
        printf("%i, %i\n", numero, fatorial);
    }

    return 0;
}