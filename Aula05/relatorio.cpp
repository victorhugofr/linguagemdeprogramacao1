#include <iostream>
#include "relatorio.h"
using namespace std;
void relatorio() {
	int i,valores[10][2],n, cont=0;
	cout << "Digite 10 valores quaisquer:\n" << endl;
	for (i=0; i<10; i++) {
		valores[i][0]=0;
		valores[i][1]=0;
	}
	for(i=0; i<10; i++) {
	cin >> n;
		for(int j=0; j<10; j++) {
		if(n==valores[j][0]&&i>0) {
			valores[j][1]++;
			break;
		}
		else {
			if(j==9) {
			valores[cont][0]=n;
			valores[cont][1]++;
			cont++;
			}
		}
		}
	}
	i=0;
	cout << endl;
	while (valores[i][0]!=0 && i<10) {
		cout << valores[i][0] << " Foi digitado: " << valores[i][1] << " vezes" << endl;
		i++;
	}
}