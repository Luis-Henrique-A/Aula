#include <stdio.h>

int main(){
    int numeros[10];
    int numero;

    printf("Insira os numeros para serem armazenados: ");
    for(int i=0; i<10; i++){
        scanf("%i", &numeros[i]);
    }
    printf("Localize um numero na base de dados: ");
    scanf("%i", &numero);
    for(int i=0; i<10; i++){
        if(numeros[i] == numero){
            printf("numero na posicao %i\n", i);
        }else{
            printf("numero nao encontrado\n");
        }
    }

    return 0;
}