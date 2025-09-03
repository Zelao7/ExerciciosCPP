#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int num1, num2;

    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;
    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " é o maior.";
    } else if (num2 > num1) {
        cout << num2 << " é o maior.";
    } else {
        cout << "Estes números são iguais.";
    }

    return 0;
}
