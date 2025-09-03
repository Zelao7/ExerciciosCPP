#include <stdio.h>

int main (void) {

    int x = 0;

    int c[11];
    c[0] = -45;
    c[1] = 6;
    c[2] = 0;
    c[7] = 62;
    c[11] = 78;

    printf("%d", c[0] + c[1] + c[2] ); //Acessando cada vetor unicamente

    x = c[6] / 2; //Dividindo o valor do sétimo elemento por 2

    return 0;
}