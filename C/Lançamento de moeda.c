#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip (void);

int main () {

    int i,x,ca = 0,co = 0;
    
    srand(time(NULL));

    for ( i = 1 ; i <= 100; i++){
        x = flip();
        printf("%d Lancamento deu %d\n", i, x);
        
        if (x == 1){
            ca++;
        } else if ( x == 2){
            co++;
        }
    }
    
    printf ("%d Caras\n", ca);
    printf ("%d Coroas", co);

    return 0;
}
int flip(void){

    int l;

    l = 1 + rand() % 2;
    return l;
}
