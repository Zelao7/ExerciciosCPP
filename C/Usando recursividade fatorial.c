#include <stdio.h>

int factorial (int x);

int main (void) {

    int i;

    for( i = 0; i <= 10; i++){
        printf("%2d!%17d\n", i , factorial(i));
    }

    return 0;
}

int factorial (int x) {
    
    if ( x < 1 ){
        return 1;
    } else {
        return ( x * factorial ( x - 1 ));
    }
}