#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (void) {
    
    double num,soma = 0,i;
    int contneg;

    cout << "Digite dez numeros: \n";
    for ( i = 0 ; i < 10 ; i++){
    
    cin >> num;
    
    if ( num > 0){
        soma += num;
    } else {
        contneg++;
    }
}

    cout << "Soma dos numeros digitados: " << soma;
    cout << "\nNumeros negativos digitados: " << contneg;
    
    return 0;
}