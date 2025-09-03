#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int num;
    int maior = 0;
    int somaPares = 0;
    double somaImpares = 0;
    int contImpares = 0;

    cout << "Digite varios numeros inteiros (Digite -999 para encerrar):\n";

    while (true) {
        cin >> num;

        if (num == -999) {
            break;
        }

        if (num > maior) {
            maior = num;
        }

        if (num % 2 == 0) {
            somaPares += num;
        } else {
            somaImpares += num;
            contImpares++;
        }
    }

    double mediaImpares = 0;
    if (contImpares > 0) {
        mediaImpares = somaImpares / contImpares;
    }

    cout << "\nMaior numero digitado: " << maior;
    cout << "\nSoma dos numeros pares: " << somaPares;
    cout << "\nMedia dos numeros impares: " << mediaImpares;

    return 0;
}
