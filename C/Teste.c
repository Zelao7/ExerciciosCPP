#include <stdio.h>
#define SIZE 10

int main (void) {

    int v[SIZE],i;

    printf("Digite numeros para o vetor: ");
    
    for ( i = 0 ; i < SIZE ; i++){
        scanf("%d", &v[i]);
    }

    printf ("%10s%18s", "Vetores","Elementos\n");

    for ( i = 0 ; i < SIZE ; i++){
        printf("%5d%15d\n", i , v[i]);
    }
    

    return 0;
}