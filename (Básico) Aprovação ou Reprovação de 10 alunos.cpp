#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int NUM_ALUNOS = 10;
    double nota1, nota2;
    double soma, media;
    int alunosAprovados = 0;

    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "Digite as 2 notas do aluno " << (i + 1) << ":\n";
        cout << "Nota 1: ";
        cin >> nota1;
        cout << "Nota 2: ";
        cin >> nota2;

        soma = nota1 + nota2;
        media = soma / 2;

        if (media >= 7) {
            alunosAprovados++;
        }
    }

    cout << "Quantidade de alunos aprovados: " << alunosAprovados;

    return 0;
}
