#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main (void) {

    string nomealuno;
    double nota1,nota2,nota3,nota4;
    double media;

    cout << "Digite o nome do aluno: \n";
    getline (cin , nomealuno);

    cout << "Agora digite as quatro notas desse aluno: \n";
    cin >> nota1 >> nota2 >> nota3 >> nota4;

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << "\nNome do aluno: " << nomealuno;
    cout << "\nNotas do aluno \n" << nota1 << "\n" << nota2 << "\n" << nota3 << "\n" << nota4;
    cout << "\nMedia das notas do aluno: " << media;

    return 0;
}