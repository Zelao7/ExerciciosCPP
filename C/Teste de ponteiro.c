#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int x = 6, *ptr;

    printf("Valor de x = %d\n", x);
    printf("Endereco de x = %p\n", &x);
    printf("Valor de ptr = %d\n", ptr);
    printf("Endereco de ptr = %p\n", &ptr);

    printf("\nAlocando x a ptr...\n");

    ptr = &x;

    printf("Valor de x = %d\n", x);
    printf("Endereco de x = %p\n", &x);
    printf("Valor de ptr = %p\n", ptr);
    printf("Endereco de ptr = %p\n", &ptr);

    printf("\nAcessando valor de x pelo ptr: \n");
    printf("Valor com o comando *ptr = %d\n", *ptr);
    


    return 0;
}