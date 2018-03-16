#include <iostream>
#include "custo.h"
using namespace std;
/**
* @brief Funcao que calcula em quantos anos o usuario se tornara milionario
* @details Calcula baseado na regra de tres
*/
void custo() {
	int salario, despesas,anos;
	cout << "Informe seu salário: " << endl;
	/** @brief recebe o quanto o usuario ganha no salario */
    cin >> salario;
	cout << "Informe seus gastos: " << endl;
	/** @brief recebe o quanto o usuario gasta no salario */
    cin >> despesas;
    /** @brief calcula a quantidade de anos que irá receber */
	anos = 1000000/(12*(salario-despesas));
	cout << "Faltam " <<anos<<"anos para juntar 1 milhao" << anos <<endl;
}