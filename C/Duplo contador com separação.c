#include <stdio.h>

int main (void) {

    //Inicializando todas as variaveis, ja com seu numero predefinido
    int aluno = 1, result, contap = 0, contrep = 0;

    //criando laço de repetição para enquanto alunos for menor que 10 continuar recebendo resultados
    while ( aluno <= 10 ) {
        printf ("Digite o resultado (1 para aprovado, 2 para reprovado)");
        scanf ("%d", &result);

        //Se o resultado é 1, somasse um aos contap (contador dos aprovados), se não contasse um aos reprovados
        if ( result == 1){
            contap++;
        } else {
            contrep++;
            }
        aluno++;               
        }

        //imprime a quantidade de alunos aprovados e reprovados
        printf ("Alunos aprovados %d Alunos Reprovados %d\n", contap, contrep);
        
        //Se os aprovador forem maiores que 8, disponibiliza o bonuas ao instrutor
        if ( contap > 8) {
            printf ("\nDevido aos %d ", contap);
            printf("Aprovamentos, o instrutor tera acesso ao bonus!\n");
        }

    return 0;
}