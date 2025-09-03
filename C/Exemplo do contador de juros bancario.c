#include <stdio.h>
#include <math.h>

int main (void) {

    double valor, principal = 1000.0, taxa = .05; //Taxa de 5%
    int ano;

    printf ("%4s%21s\n", "Ano", "Valor na conta"); //4s e 21s sao para enquadrar os resultados


    for ( ano = 1; ano <= 10; ano++ ) {

        valor = principal * pow (1.0 + taxa , ano); //função pow (x,y) calcula o valor de x na potencia y

        printf ("%3d%18.2f\n", ano, valor);
    }

    return 0;
}