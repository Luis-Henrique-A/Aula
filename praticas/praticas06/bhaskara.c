#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    int delta;
    float x1,x2;

    printf("Digite seu a: ");
    scanf("%i", &a);
    printf("Digite seu b: ");
    scanf("%i", &b);
    printf("Digite seu c: ");
    scanf("%i", &c);

    delta = b*b - 4*a*c;

    if(delta < 0){
        printf("Equacao nao possui raizes reais");
    } else{
        x1 = (-b + sqrt(delta)) / 2*a;
        x2 = (-b - sqrt(delta)) / 2*a;
        printf("As raizes sao: %f,%f", x1,x2);
    }

    return 0;
}