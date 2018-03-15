#include <iostream>
#include "notas.h"
using namespace std;
/*
 @brief Função troco subtraí as notas do total até zerar, contando quantas vezes conseguiu subtrair cada nota.
 @details Função troco utiliza um vetor notasgerais com as notas disponiveis,
 subtraindo as notas do montante caso a subtração resulte em 0, passa para uma nota menor até zerar n. 
*/
void notas() {
	int n;
	int notasgerais[7]= { 100, 50, 20, 10, 5, 2, 1 }, contador[7] = {0,0,0,0,0,0,0};
	cout << "Digite o montante (R$): ";
	cin >> n;
	for (int i=0; i<7; i++) {
		while((n-notasgerais[i])>=0) {
			n = n-notasgerais[i];
			contador[i]++;
		}
	}
	cout << endl;
	for(int i=0; i<7; i++) {
		if(contador[i]>0) cout << contador[i] << " nota(s) de " << notasgerais[i] << " reais" << endl;
	}
}