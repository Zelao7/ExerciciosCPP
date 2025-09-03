#include <stdio.h>

int main(void) { 

    int n,soma = 0,np,i;

    printf("Digite o numero de valores a serem lidos a seguir: \n");
    scanf("%d", &np);

    for ( i = 1; i <= np; i++) {
        scanf("%d", &n);
        soma += n;
    }

    printf ("Soma dos numeros = %d", soma);

    return 0; 
}
