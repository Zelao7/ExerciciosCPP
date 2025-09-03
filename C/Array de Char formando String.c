#include <stdio.h>

int main( void )
{
    char string1[ 20 ];
    char string2[] = "string literal";
    int i;

    printf("Digite uma string: ");
    scanf( "%s", string1 );

    printf( "string1 é: %s\nstring2 é: %s\nstring1 com espaços entre caracteres é:\n", string1, string2 );

    for ( i = 0; string1[ i ] != '\0'; i++ ) {
        printf( "%c ", string1[ i ] );
    }

    printf( "\n" );
    return 0;
}
