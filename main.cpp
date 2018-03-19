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

    //Declara tres variaveis, o usuario entra os valores salario e despesas, chama a funcao tempo_em_anos, atribuindo o valor para a variavel anos e imprime na tela o valor de anos.

    cout << endl << "----- Funcionalidade 2 -----" << endl;
    int valores[10];
    cout << "Digite 10 valores inteiros: " << endl;
    numero_de_vezes(valores);

    //Declara um vetor de inteiros de tamanho 10, chama a funcao void chamada de numero_de_vezes.

    cout << endl << "----- Funcionalidade 3 -----" << endl;
    int reais;
    cout << "Digite um valor inteiro(em reais R$): " << endl;
    cin >> reais;
    decomposicao_em_notas(reais);

    //Declara o valor inteiro reais, o usuario entra o valor dessa variavel/quantia e a funcao void decomposicao_em_notas mostra esse valor partido em notas, em reais, de valores menores.
    
    return 0;
}
