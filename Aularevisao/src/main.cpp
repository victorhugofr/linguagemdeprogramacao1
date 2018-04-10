/**
 * @file  main.cpp
 * @brief Exercicio de revisao com o objetivo de simular um banco
 * @author Victor Hugo Freire Ramalho
 * @since 27/03/2018
 * @date 29/03/2018
 * @copyright Victor Hugo corporacoes
*/
#include <iostream>
#include "../include/cabecalho.hpp"
#include "../include/conta.hpp"
#include "../include/procedimentos.hpp"
int main(){
	Conta *conta;
	conta=new Conta[1000];
	cabeccalho(conta);
	return 0;
}