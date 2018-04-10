/**
 * @file  custo.cpp
 * @brief Exercicio baseado nos pontos da aula 05
 * @author Victor Hugo Freire Ramalho
 * @since 08/03/2018
 * @date 12/03/2018
 * @copyright Victor Hugo corporacoes
*/
#include <iostream>
#include "../include/custo.hpp"
using namespace std;
/**
* @brief Funcao que calcula em quantos anos o usuario se tornara milionario
* @details Calcula baseado na regra de tres
*/
void custo() {
	int salario, despesas,anos;
	cout << "Informe seu salário: " << endl;
	/**  recebe o quanto o usuario ganha no salario */
    cin >> salario;
	cout << "Informe seus gastos: " << endl;
	/**  recebe o quanto o usuario gasta no salario */
    cin >> despesas;
    /**  calcula a quantidade de anos que irá receber */
	anos = 1000000/(12*(salario-despesas));
	cout << "Faltam " <<anos<<" anos para juntar 1 milhao" <<endl;
}