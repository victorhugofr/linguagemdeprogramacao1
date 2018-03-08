/*
@file 2ponto.cpp
@brief Programa que calcula quantas vezes um número foi digitado
@author Victor Hugo Freire Ramalho
@since 06/03/2018
@date 08/03/2016
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {
	int i;
	/*Definimos uma matriz com 2 colunas: uma para salvar o número e a outra quantas vezes ele foi utilizado*/
	int valores[10][2];
	for (i=0; i<10; i++) {
		valores[i][0]=0;
		valores[i][1]=0;
	}
	int n, cont=0;
	for(i=0; i<10; i++) {
	cin >> n;
		for(int j=0; j<10; j++) {
			if(n==valores[j][0] && i>0) {
				valores[j][1]++;
				break;
			}
			else if(j==9) {
					valores[cont][0]=n;
					valores[cont][1]++;
					cont++;
				}		
		}
	}
	i=0;
	while (valores[i][0]!=0&&i<10) {
		cout << valores[i][0] << " Foi digitado: " << valores[i][1] << " vezes" << endl;
		i++;
	}
	return 0;
}