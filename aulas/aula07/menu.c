#include <stdio.h>

int main(){
    int opcao = 0;

    do{
        system("clear");
        printf("MENU PRICIPAL\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Recarregar\n");
        printf("3 - Ver recados\n");
        printf("0 - sair\n");
        printf("Entre com a opcao => ");
        scanf("%i", &opcao);
        while(getchar() != '\n');

        switch(opcao){
            case 1:{
                system("clear");
                printf("CONSULTA SALDO\n");
                printf("Seu saldo eh R$10.00\n"); break;
                   }
            case 2: printf("Escolha um valor para recarga.\n"); break;
            case 3: printf("Voce nao tem recados\n"); break;
            case 0: printf("Ate logo!\n"); break;
            default: printf("Opcao invalida, tente novamente\n");
    }

    if(opcao!= 0){
            printf("Pressione ENTER para continuar...");
            getchar();
          }

    }while(opcao !=0);

    return 0;
}