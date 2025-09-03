#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (void) {

    int alt,bas;
    float form;

    cout << "Digite a base e a altura do triangulo a ser calculado a area: \n";
    cin >> bas >> alt;

    form = (bas * alt) / 2;

    cout << "A Area do triangulo e de: " << form;

    return 0;
}