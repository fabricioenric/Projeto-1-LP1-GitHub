#include <iostream>
#include "funcoes.hpp"

using namespace std;

/* -----------Funcao 1: 
     
  ---- Entra os parametros salario e despesas, declara o inteiro meses e o double sobra, cria um laco for(sobra inicialmente recebe o valor
da diferenca entre salario e despesas, com ate o maximo de um milhao, incrementando essa mesma diferenca a cada ciclo), que aumenta a variavel
meses em uma unidade a cada ciclo. Ao fim do for, retorna para main o valor de meses dividido por 12, para mostrar aproximadamente o numero de
anos necessarios.
*/

int tempo_em_anos(double salario,double despesas){

    int meses = 0;
    double sobra = salario - despesas;

    for(sobra = (salario - despesas); sobra <= 1000000; sobra += (salario - despesas)) 
      meses++;

    return meses / 12;
}


void numero_de_vezes(int valores[10]){

     int x,i,n,numeros[10];
     vector<numero_relatorio> relatorio;
     vector<numero_relatorio>::iterator it;
     vector<numero_relatorio>::iterator aux;

     for(i = 0; i < 10; i++){
       numeros[i] = 0;
       cin >> n;
       numeros[i] = n;
     }

     for(i = 0; i < 10; i++){
        numero_relatorio number;
        x = 0;
        for(it = relatorio.begin(); it < relatorio.end(); it++){
          number = *it;
          if(numeros[i] == number.numero){
             numero_relatorio qtd;
             relatorio.at(x).vezes += 1;
             break;

          }
          x++;
        }

        if(relatorio.empty()){
          numero_relatorio number;
          number.numero = numeros[i];
          number.vezes = 1;
          aux = relatorio.insert(aux,number);

        } else if(numeros[i] != number.numero){
            number.numero = numeros[i];
            number.vezes = 1;
            aux = relatorio.insert(aux,number);
        }

    }

    for(it = relatorio.begin(); it < relatorio.end(); it++){
        numero_relatorio numero_print = *it;
        cout << numero_print.numero << ' ' << " digitado " << numero_print.vezes << " vezes" << '\n';
    }

}

/* ----------- Funcao 3:

   ---- Entra o parametro inteiro reais, declara 6 variaveis auxiliares. Para decompor em notas de 100, divide reais por 100. 
   ---- Auxiliar recebe o resto da divisao de reais por 100 e para decompor em notas de 50, divide auxiliar(com o novo valor) por 50. 
   ---- Aux2 recebe o resto da divisao de auxiliar por 50 e para decompor em notas de 20, divide aux2(com o novo valor) por 20. 
   ---- Aux3 recebe o resto da divisao de aux2 por 20 e para decompor em notas de 10, divide aux3(com o novo valor) por 10. 
   ---- Aux4 recebe o resto da divisao de aux3 por 10 e para decompor em notas de 5, divide aux4(com o novo valor) por 5. 
   ---- Aux5 recebe o resto da divisao de aux4 por 5 e para decompor em notas de 2, divide aux5(com o novo valor)por 2. 
   ---- Aux6 recebe o resto da divisao de aux5 por 2 e para decompor em notas de 1, divide aux6(com o novo valor) por 1. 
*/

void decomposicao_em_notas(int reais){

     int auxiliar,aux2,aux3,aux4,aux5,aux6;

     cout << "Valor digitado em reais: " << reais << endl << "nota(s) de R$ 100,00: " <<  reais/100 << endl;

     auxiliar = reais%100;
     cout << "nota(s) de R$ 50,00: " << auxiliar/50 << endl;

     aux2 = auxiliar%50;
     cout << "nota(s) de R$ 20,00: " << aux2/20 << endl;

     aux3 = aux2%20;
     cout << "nota(s) de R$ 10,00: " << aux3/10 << endl;

     aux4 = aux3%10;
     cout << "nota(s) de R$ 5,00: " <<  aux4/5 << endl;

     aux5 = aux4%5;
     cout << "nota(s) de R$ 2,00: " << aux5/2 << endl;

     aux6 = aux5%2;
     cout << "nota(s) de R$ 1,00: " <<  aux6/1 << endl;
}
