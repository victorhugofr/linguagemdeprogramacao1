#include <iostream>
#include "notas.h"
#include "relatorio.h"
#include "custo.h"
using namespace std;
int main() {
	int n=0;
	while(n!=4){
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