#include <stdio.h>

int main(){
    int numero = 0;

    printf("Insira um numero para vericar quais numeros sao seu multiplos: ");
    scanf("%i", &numero);

    //for(int i = 1; i < (numero*10)+1 ; i++){
    for(int i = 1; i < 101 ; i++){
        if(i % numero == 0){
            printf("%i\n", i);
        }
    }

    return 0;
}