#include <stdio.h>

int main (void) {

    int nmrcont;
    float limcre,saldo,novlim;

    printf("Digite o numero de conta (digite -1 para parar): ");
    scanf("%d", &nmrcont);

    while ( nmrcont != -1 ){

    printf("Digite o limite de credito antes da recessao: ");
    scanf("%f", &limcre);

    printf("Digite o saldo do cliente: ");
    scanf("%f", &saldo);

    novlim = limcre / 2;

    printf("\nO novo limite do cliente %d e de: %.2f", nmrcont, novlim);

    if ( saldo > novlim){
        printf("\nEsse cliente tem o saldo superior a seus limites de credito");
    } else {
        printf("\nEsse cliente nao tem saldo superior ao seu novo limite");
    }

    printf("\n\nDigite o numero de conta (digite -1 para parar): ");
    scanf("%d", &nmrcont);

    }

    return 0;
}