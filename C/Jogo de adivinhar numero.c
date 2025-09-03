#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int ValorPick = 0,ValorUsua,Nmrtent = 0;

    srand (time (NULL));

    ValorPick = 1 + rand() % 1000;
    printf("o valor escolhido e: %d", ValorPick, " ");
    
    printf(" O sistema escolheu um numero: digite para ver se esta perto: ");
    scanf("%d", &ValorUsua);
    
    while ( ValorPick != ValorUsua ){
    
    if ( ValorUsua < ValorPick ) {
        printf("O numero esta acima de : %d", ValorUsua);
        Nmrtent++;
    }

    if ( ValorUsua > ValorPick ) {
        printf("O numero esta abaixo de : %d", ValorUsua);
        Nmrtent++;
    }

    printf("\nTente outro: ");
    scanf("%d", &ValorUsua);
}   

    if (Nmrtent < 10){
        printf("Ou voce conhece o segredo ou teve sorte!");
    } else if ( Nmrtent == 10){ 
        printf("Ahah! Voce conhece o segredo!");
    } else if ( Nmrtent > 10) {
        printf("Voce deveria se sair melhor!");
    }

    if ( ValorUsua == ValorPick ) {
        printf("\nParabens voce ganhou o jogo!");
    }

    return 0;
}