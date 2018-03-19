#include <iostream>
#include <vector>
#include "funcoes.hpp"
#include "funcionalidades.cpp"

using namespace std;

int main(){

    cout << "----- Funcionalidade 1 -----" << endl;
    double salario,despesas,anos;
    cout << "Digite seu salario e despesas mensais, respectivamente: " << endl;
    cin >> salario >> despesas;
    anos = tempo_em_anos(salario,despesas);
    cout << "Numero de ano(s) necessario(s) aproximadamente para se tornar milionario eh de: " << anos << endl;


    cout << endl << "----- Funcionalidade 2 -----" << endl;
    int valores[10];
    cout << "Digite 10 valores inteiros: " << endl;
    numero_de_vezes(valores);


    cout << endl << "----- Funcionalidade 3 -----" << endl;
    int reais;
    cout << "Digite um valor inteiro(em reais R$): " << endl;
    cin >> reais;
    decomposicao_em_notas(reais);

    return 0;
}
