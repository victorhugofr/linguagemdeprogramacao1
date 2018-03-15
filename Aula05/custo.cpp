#include <iostream>
#include "custo.h"
using namespace std;
void custo() {
	int salario, despesas,anos;
	cout << "Informe seu salário: " << endl;
    cin >> salario;
	cout << "Informe seus gastos: " << endl;
    cin >> despesas;
	anos = 1000000/(12*(salario-despesas));
	cout << "Faltam " <<anos<<"anos para juntar 1 milhao" << anos <<endl;
}