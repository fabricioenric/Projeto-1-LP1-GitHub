#ifndef FUNCOES_HPP_INCLUDED
#define FUNCOES_HPP_INCLUDED

//Prototipo das funcoes:

int tempo_em_anos(double salario,double despesas); //Função para descobrir quantos anos serão necessários para alguém se tornar milionário, de acordo com o ganho e o gasto mensal.

void numero_de_vezes(int valores[10]); //Função para quantificar a frequência de 10 valores inteiros.

struct numero_relatorio{ //Struct para auxiliar na enumeracao dos numeros digitados e quantificar quantas vezes cada um apareceu.
    int numero,vezes;
};

void decomposicao_em_notas(int reais); //Função para decompor um determinado valor inteiro, em reais, em notas de 100, 50, 20, 10, 5, 2, e 1.

#endif // FUNCOES_HPP_INCLUDED
