#include <stdio.h>
#include <string.h>

int main(){
    char primeiro_nome[20];
    char ultimo_nome[20];
    char nome[40];

    printf("Entre com o seu primeiro nome: ");
    scanf("%[^\n]s", primeiro_nome);
    while(getchar() != '\n');

    printf("Entre com seu ultimo nome: ");
    scanf("%s", ultimo_nome);
    while(getchar() != '\n');

    //nome == primeiro nome
    strcpy(nome, primeiro_nome);
    printf("%s\n", nome);

    //nome = nome + ultimo_nome
    strcat(nome, " ");
    strcat(nome, ultimo_nome);
    printf("%s\n", nome);

    //temanho da string preenchida
    printf("A palavra '%s' tem %i characteres\n", primeiro_nome, strlen(primeiro_nome));

    //comparar strings
    if(strcmp(primeiro_nome, ultimo_nome) > 0){
        printf("A ordem eh %s, %s\n", ultimo_nome, primeiro_nome);
    } else{
        printf("A ordem eh %s, %s\n", ultimo_nome, primeiro_nome);
    }

    //procurar por string
    if(strstr(nome, "Silva")){
        printf("Voce eh da familia Silva\n");
    }else{
        printf("Voce naum eh da familia Silva");
    }

    //preencher uma string
    memset(nome, 'a', 10);
    printf("%s\n", nome);
    memset(nome, 'b', 20);
    printf("%s\n", nome);
    memset(nome, 0, sizeof(nome)); //limpa a string
    printf("%s\n", nome);

    return 0;
}