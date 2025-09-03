#include <stdio.h>

int main (void) {

    int nmrconta;
    float saldoini,encargos,creditos,limcre = 0,novosaldo;

    printf("\nDigite o numero da conta (Digite 1 para parar): \n");
    scanf("%d", &nmrconta);

    while ( nmrconta != -1) {

    printf("Saldo no inicio do mes: \n");
    scanf("%f", &saldoini);

    printf("Total dos encargos no mes: \n");
    scanf ("%f", &encargos);

    printf ("Total de creditos aplicados no mes: \n");
    scanf ("%f", &creditos);

    printf("Limite de credito autorizado: \n");
    scanf ("%f", &limcre);

    novosaldo = saldoini + encargos - creditos;

    if (novosaldo > limcre) {
        printf("\nNumero da conta: %d\n", nmrconta);
        printf("Total de limite de credito: %.2f\n", limcre);
        printf("Novo saldo: %.2f\n", novosaldo);
        printf("Limite de credito ultrapassado\n");
    }

    printf("\nDigite o numero da conta (Digite 1 para parar): \n");
    scanf("%d", &nmrconta);
    
}

    return 0;
}