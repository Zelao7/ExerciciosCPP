#include <stdio.h>

int aumentar (int num);

int main() {
    int x = 10;
    aumentar(x); // Passando x por valor
    printf("%d", aumentar(x));
    printf("%d", x); // Saída: 10
    printf("%d", aumentar(x));

    return 0;
}
int aumentar(int num) {
    num += 5; // Isso só muda a cópia dentro da função
    printf("%d", num);
    //return num; //Tem que ter o return para o valor retornar a chamadora, se não o valor nao retorna
}