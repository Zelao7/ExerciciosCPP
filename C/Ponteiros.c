#include <stdio.h>

int main(void){

    int a, *aPtr;

    a = 7;
    aPtr = &a; //A variavel do ponteiro recebe o endereço de a

    printf("O endereco de a e %p\nO valor de aPtr e %p", &a , aPtr);

    printf("\n\nO valor de a e %d\nO valor de (desreferenciado)*aPtr e %d", a ,*aPtr);

    return 0;
}