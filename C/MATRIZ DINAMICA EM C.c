#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {

    int **mat, i , j; //gero o ponteiro para ponteiro ja que vai ter uma linha e uma coluna

    mat = malloc(4 * sizeof(int*)); //Aloco memória para os ponteiros(colunas), que apontaram para o começo das linhas

    for ( i = 0; i < 4; i++){
        mat[i] = malloc(3 * sizeof(int)); //Alocando para cada posição das 4 que aloquei 3 espaços para os inteiros
    }
    srand(time(NULL)); //Semente aleatória

    for ( i = 0; i < 4; i++){ //Preenchendo a matriz com numeros aleatórios
        for ( j = 0; j < 3; j++){
            mat[i][j] = rand () % 100;
        }
    }

    for ( i = 0; i < 4; i++){ //Percorrendo a matriz e exibindo o numero
        for ( j = 0; j < 3; j++){
            printf("%d ", mat[i][j]);
            }
        printf("\n");
    }

    return 0;
}