#include <stdio.h>

int main (void) {

    int n[10],i;

    for ( i = 0 ; i < 10; i++){
        n[i] = 0;
    }

    printf ("%10s%18s", "Vetor", "Elemento\n");

    for( i = 0 ; i < 10 ; i++){
        printf("%8d\t%8d\n", i , n[i]);
    }

    return 0;
}