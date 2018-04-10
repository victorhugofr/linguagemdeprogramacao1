/**
 * @file  main.cpp
 * @brief Exercicio baseado nos pontos da aula 05
 * @author Victor Hugo Freire Ramalho
 * @since 08/03/2018
 * @date 12/03/2018
 * @copyright Victor Hugo corporacoes
*/
#include <iostream>
#include "../include/notas.hpp"
#include "../include/relatorio.hpp"
#include "../include/custo.hpp"
using namespace std;
int main() {
     int n=0;
     while(n!=4){
          /** Menu para o usuário*/
     cout << "Digite 1 para saber em quantos anos se tornará milionário"<< endl;
     cout << "Digite 2 para saber a quantidade de vezes que se digita o número" << endl;
     cout << "Digite 3 para saber o troco a ser recebido"<< endl;
     cout << "Digite 4 se não deseja fazer nada"<< endl;
     cin >> n;
     cout << endl;
          if(n==1) {
               custo();
          }
          if(n==2) {
               relatorio();
          }
          if(n==3) {
               notas();
          }
     }
     return 0;
}