#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

int main(void){

    int vetor[10];

    srand (time(NULL));

    for (int i = 0; i < 9; i++){
        vetor[i] = (rand() % 100);
        printf("\nNumero na posicao %d %d", i, vetor[i]);
    }

    sort (vetor, vetor + 10);
    
    printf("\nVetor ordenado: ");

    for(int i = 0; i < 10; i++){
        printf("\nNumero na posicao %d %d", i, vetor[i]);
    }




    return 0;
}