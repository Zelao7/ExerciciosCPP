#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {

    int tam, *vet, i;

    printf("Digite o tamanho do vetor: ");
    scanf ("%d", &tam);

    srand(time(NULL));

    vet = malloc(tam * sizeof(int));

    if (vet){
        for ( i = 0 ; i < tam ; i++)
            *(vet + i)= rand() % 100;
        
        for ( i = 0 ; i < tam ; i++)
            printf("%d ", *(vet + i));
        
    } else {
        printf("Erro ao alocar");
    }

    free(vet); 
    
    return 0;
}