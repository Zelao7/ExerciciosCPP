#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main (void) {

    double raio,altura,form;

    cout << "Digite o raio e a altura do cilindro para seu calculo de volume: \n";
    cin >> raio >> altura;

    form = M_PI * (raio * raio) * altura;

    cout << "\nO volume do cilindro e de: " << form << " unidades cubicas"; 

    return 0;
}