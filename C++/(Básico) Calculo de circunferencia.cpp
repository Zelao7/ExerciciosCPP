#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int raio;
    double circunferencia,area,diametro;

    cout << "Digite o raio do circulo como um numero inteiro: ";
    cin >> raio;

    diametro = 2 * raio;
    circunferencia = 2 * M_PI * raio;
    area = M_PI * raio * raio;

    cout << "Diametro: " << diametro;
    cout << "Circunferencia: " << circunferencia;
    cout << "Area: " << area;

    return 0;
}
