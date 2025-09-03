#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main (void) {

    int num;

    cout << "Digite um numero: ";
    cin >> num;

    cout << "Numero anterior a esse: " << (num - 1);
    cout << "\nNumero posterior a esse: " << (num + 1);

    return 0;
}