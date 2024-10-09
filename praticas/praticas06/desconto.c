#include <stdio.h>

int main(){
    float valor_bruto,valor_desconto;

    printf("Coloque o preco total da compra: ");
    scanf("%f", &valor_bruto);

    if(valor_bruto <= 100.0f && !0){
        valor_desconto = valor_bruto * 0.01f;
    } else if(valor_bruto <= 500.0f){
        valor_desconto = valor_bruto * 0.05f;
    } else{
        valor_desconto = valor_bruto * 0.1f;
    }

    printf("voce vai salvar %f R$ com o desconto aplicado na compra", valor_desconto);

    return 0;
}