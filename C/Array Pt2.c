 #include <stdio.h>
#define SIZE 10

int main (void) {

    int s [SIZE],j;

    for( j = 0 ; j < SIZE ; j++){
        s [j] = 2 + 2 * j;
    }

    printf ("%10s%18s", "Vetor", "Elemento\n");

    for( j = 0 ; j < SIZE ; j++){
        printf("%8d\t%8d\n", j , s[j]);
    }

    return 0;
}