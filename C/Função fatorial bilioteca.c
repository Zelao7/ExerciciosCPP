#include <stdio.h>

long int fatorial (int n);

int main (void) {
    
printf ("Fatorial (6) = %ld\n", fatorial (6)) ;
    
return 0 ;
}
    
    long int fatorial (int n) {
        
        long int parcial ;
        
        printf ("antes: n: %d\n", n) ;
        
        if (n < 2)
        parcial = 1 ;
        else
        parcial = n * fatorial (n - 1) ;
    
        printf ("depois: n: %d, parcial: %ld\n", n, parcial) ;
    
    return (parcial) ;
    }