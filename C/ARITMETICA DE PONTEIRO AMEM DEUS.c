#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int nota[5] = { 45, 78, 92, 73, 87 }, *p;

    p = nota ; // p aponta para nota[0], sempre vai vai apontar para o inicio do vetor[0]
    
    printf ("p: %p, *p: %d\n", p, *p) ;
    
    p++ ; // p aponta para nota[1], e soma 1 a p então v[0] + 1 = v [1]
    
    printf ("p: %p, *p: %d\n", p, *p) ;
    
    p += 3 ; // p aponta para nota[4], o v está na posicão 1, somando fica v[1] + 3 = v[5]
    
    printf ("p: %p, *p: %d\n", p, *p) ;


    return 0;
}