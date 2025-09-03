#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main (void) {

    int v[SIZE],i,*ptr;

    ptr = &v;

    for ( i = 1 ; i <= SIZE ; i++){
        scanf ("%d", &*(ptr + i)); // ptr[i] é equivalente a *(ptr + i)
    }

    for ( i = SIZE ; i >= 1 ; i--){
        printf ("%d\n", *(ptr + i)); // Aqui também podemos usar *(ptr + i)
    }

    return 0;
}


