#include <stdio.h>

int main (void) {

    int numeroproduto, quantvendida;
    float precorevenda, x1 = 0 , x2 = 0, x3 = 0, x4 = 0, x5 = 0 , soma;

    printf("%21s", "Tabela de precos\n\n");
    printf("%2d%15s%.2f\n", 1 , "\tR$ " , 2.98 );
    printf("%2d%15s%.2f\n", 2 , "\tR$ " , 4.50 );
    printf("%2d%15s%.2f\n", 3 , "\tR$ " , 9.98 );
    printf("%2d%15s%.2f\n", 4 , "\tR$ " , 4.49 );
    printf("%2d%15s%.2f\n", 5 , "\tR$ " , 6.87 );

    printf("\nDigite o numero dos produtos vendidos na semana: ");
    scanf("%d", &numeroproduto);

    while (numeroproduto != -1){
        switch (numeroproduto){

            case 1:
            printf("Digite a quantidade vendida: ");
            scanf("%d", &quantvendida);
            precorevenda = 2.98 * quantvendida;
            printf ("Valor unitario de 2.98 multiplicado por %d unidades = R$%.2f\n", quantvendida ,precorevenda);
            x1 = precorevenda;
                break;

            case 2:
            printf("Digite a quantidade vendida: ");
            scanf("%d", &quantvendida);
            precorevenda = 4.50 * quantvendida;
            printf ("Valor unitario de 4.50 multiplicado por %d unidades = R$%.2f\n", quantvendida ,precorevenda);
            x2 = precorevenda;
                break;

            case 3:
            printf("Digite a quantidade vendida: ");
            scanf("%d", &quantvendida);
            precorevenda = 9.98 * quantvendida;
            printf ("Valor unitario de 9.98 multiplicado por %d unidades = R$%.2f\n", quantvendida ,precorevenda);
            x3 = precorevenda;
                break;

            case 4:
            printf("Digite a quantidade vendida: ");
            scanf("%d", &quantvendida);
            precorevenda = 4.49 * quantvendida;
            printf ("Valor unitario de 4.49 multiplicado por %d unidades = R$%.2f\n", quantvendida ,precorevenda);
            x4 = precorevenda;
                break;

            case 5:
            printf("Digite a quantidade vendida: ");
            scanf("%d", &quantvendida);
            precorevenda = 6.87 * quantvendida;
            printf ("Valor unitario de 6.87 multiplicado por %d unidades = R$%.2f\n", quantvendida ,precorevenda);
            x5 = precorevenda;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
            printf("\nValor invalido digitado, por favor");
                break;
        }

        printf("\nDigite o numero de outros produtos ou -1 para sair: ");
        scanf("%d", &numeroproduto);

    }

    soma = x1 + x2 + x3 + x4 + x5;
    printf("\nValor total de produtos vendidos na semana: R$%.2f", soma);

    return 0;
}