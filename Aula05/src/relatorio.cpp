/**
 * @file  relatorio.cpp
 * @brief Exercicio baseado nos pontos da aula 05
 * @author Victor Hugo Freire Ramalho
 * @since 08/03/2018
 * @date 12/03/2018
 * @copyright Victor Hugo corporacoes
*/
#include <iostream>
#include "../include/relatorio.hpp"
using namespace std;
/**
* @brief Funcao que calcula quantas vezes foi digitado um valor.
* @details Utiliza-se de matriz alocar o valor.
*/
void relatorio() {
	int i,numeros[10][2],n, cont=0;
	cout << "Digite 10 números:\n" << endl;
	/**  Leitura de valores*/
	for (i=0; i<10; i++) {
		numeros[i][0]=0;
		numeros[i][1]=0;
	}
	for(i=0; i<10; i++) {
	cin >> n;
		for(int j=0; j<10; j++) {
			/** verificação caso haja digitado um número igual a esse*/
		if(n == numeros[j][0] && i>0) {
			numeros[j][1]++;
			break;
		}
			else if(j==9) {
				numeros[cont][0]=n;
				numeros[cont][1]++;
				cont++;	
			}
		}
	}
	i=0;
	cout << endl;
	/**  Resultado*/
	while (numeros[i][0]!=0 && i<10) {
		cout << numeros[i][0] << " Foi digitado: " << numeros[i][1] << " vezes" << endl;
		i++;
	}
}