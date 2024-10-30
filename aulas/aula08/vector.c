#include <stdio.h>

int main(){
    int numeros[10]; //array ou vetor

    numeros[0] = 10; // primeira posição
    numeros[1] = -45; // segunda posição
    numeros[2] = -5;
    numeros[3] = 4;
    numeros[4] = 77;
    numeros[5] = 1423;
    numeros[6] = 101;
    numeros[7] = 382;
    numeros[8] = 3;
    numeros[9] = 69;

    for(int i = 0; i < 10; i++){
        printf("%i, ", numeros[i]);
    }

    float notas[10][2]; // matriz bidimensional

    notas[0][0] = 4.5f;
    notas[0][1] = 6.8f;
    notas[1][0] = 4.5f;
    notas[1][1] = 6.8f;
    notas[2][0] = 4.5f;
    notas[2][1] = 6.8f;
    notas[3][0] = 4.5f;
    notas[3][1] = 6.8f;
    notas[4][0] = 4.5f;
    notas[4][1] = 6.8f;
    notas[5][0] = 4.5f;
    notas[5][1] = 6.8f;
    notas[6][0] = 4.5f;
    notas[6][1] = 6.8f;
    notas[7][0] = 4.5f;
    notas[7][1] = 6.8f;
    notas[8][0] = 4.5f;
    notas[8][1] = 6.8f;
    notas[9][0] = 4.5f;
    notas[9][1] = 6.8f;

    for(int i=0; i<10; i++){
        for(int j=0; j<2; j++){
            printf("%.1f, ", notas[i][j]);
        }
        printf("\n");
    }


}