#include <stdio.h>

int main(){
    float temperatura = 0;
    printf("Temperatura: ");
    scanf("%f", &temperatura);

    if(temperatura >= 40.0f){
        printf("Muito Quente");
    } else if(30.0f <= temperatura && temperatura < 40.0f){
        printf("Quente");
    } else if(20.0f <= temperatura && temperatura < 30.0f){
        printf("agradavel");
    } else{
        printf("Frio");
    }

    return 0;
}