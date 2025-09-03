#include <stdio.h>

int main (void) {

    //Declarando as variaveis que serão usadas
    int total, cont, nota;
    float media;

    //incialicação das variaveis que nao terão processo destrutivo
    total = 0;
    cont = 0;

    //Recebe a primeira nota do usuário
    printf ("Digite uma nota (Digitar -1 para parar): ");
    scanf ("%d", &nota);

    //Enquanto a flag não for usada ele vai continuar somando as notas ao total e pedindo mais uma nota
    while ( nota != -1 ) {
        total = total + nota;
        cont++;
        printf ("Digite uma nota: ");
        scanf ("%d", &nota);
    }

    //Se o contador não for igual a 0 ele conta a media e imprime, se for igual a zero quer dizer que o usuário nao digitou nenhuma nota
    if ( cont != 0 ) {
        media = (float) total / cont; //Para evitar sempre dar inteiros transformar o total em float com (float)
        printf("A media e: %.2f", media);
    } else {
        printf ("Nenhuma nota digitada");
    }

    return 0;
}