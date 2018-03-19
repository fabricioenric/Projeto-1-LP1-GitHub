#include <iostream>
#include "funcoes.hpp"

using namespace std;

int tempo_em_anos(double salario,double despesas){

    int meses = 0;
    double sobra = salario - despesas;

    for(sobra = (salario - despesas); sobra <= 1000000; sobra += (salario - despesas))
      meses++;

    return meses / 12;
}


struct numero_relatorio{
    int numero,vezes;
};


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
