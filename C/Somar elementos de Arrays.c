#include <stdio.h>
#define SIZE 12

int main (void) {

    int i,total = 0, v[SIZE] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };

    for ( i = 0 ; i < SIZE ; i++){
        total += v[i];
    }

    printf ("O total e de: %d", total);

    return 0;
}