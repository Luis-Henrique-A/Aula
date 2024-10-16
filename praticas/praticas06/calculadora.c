#include <stdio.h>

int main(){
    char operacao;
    float x1,x2;

    printf("Informe a operacao: ");
    scanf("%c", &operacao);
    printf("Informe as duas variaveis para a operacao: ");
    scanf("%f,%f", &x1,&x2);

    switch(operacao){
        case '+': printf("%f", x1+x2); break;
        case '-' : printf("%f", x1-x2); break;
        case '*' : printf("%f", x1*x2); break;
        case '/' : printf("%f", x1/x2); break;
        deafult : printf("Operacao Invalida");
    }

    return 0;
}