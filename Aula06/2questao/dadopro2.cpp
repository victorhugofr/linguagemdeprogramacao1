#include <iostream>
#include <ctime> 
#include <cstdlib>
#include "dado.h"
#include "lancar.h"
using std::cin;
using std::cout;
using std::endl;
/**
 * @file  dadopro2.cpp
 * @brief Exercicio do lançamento de dados
 * @details O objetivo é lançar um dado aleatorio e imprimir o resultado e a soma dos lançamentos.
 * @author Victor Hugo Freire Ramalho
 * @since 08/03/2018
 * @date 12/03/2018
 * @copyright Victor Hugo corporacoes
*/

int main ()
{
	int n;
	cout << "Quantidade de lançamentos: ";
	cin>>n;
	lancar(n);
	return 0;
}