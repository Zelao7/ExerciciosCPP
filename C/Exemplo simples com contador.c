#include <stdio.h>

int main(void) {

    //Declarando as variaveis que serão usadas, e já declarando que o total será de 0
    float med, total = 0;
    int nota;

    //Declarando que contador começa no 1, ignora o 0 então ele pedirá 10 números, ao inves de 11, se contado o 0
    int cont = 1;

    //Enquanto contador for menor que 10 ele pedirá uma nota e somará ao total, adicionando um ao contador
    while (cont <= 10){
        printf("Digite uma nota: ");
        scanf("%d", &nota);
        total = nota + total;
        cont++;
    }

    //Calculando a media e imprimindo ela
    med = total / 10;
    printf ("A media da turma foi: %.2f", med);

    return 0;
}