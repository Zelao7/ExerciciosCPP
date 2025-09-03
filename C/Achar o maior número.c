#include <stdio.h>

int main (void) {

    int numero,maior = 0,cont = 0;

    while ( cont < 10 ){
    printf("Insira dez numeros: ");
    scanf("%d", &numero);
        if (numero > maior){
            maior = numero;
        }    
    cont++;
    }
    printf("%d", maior);

    return 0;
}