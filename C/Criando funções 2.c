#include <stdio.h>

int maximum (int x, int y, int z);


int main (void) {

    int num1,num2,num3;

    printf("Digite tres numeros: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    printf("O maior deles e: %d", maximum(num1,num2,num3));

    return 0;
}

int maximum (int x, int y, int z){
    int max = x;

    if (y > max){
        max = y;
    }
    if (z > max){
        max = z;
    }
    return max;
}