#ifndef	PISTA_HPP
#define PISTA_HPP
#include <iostream>
#include <string>
using namespace std;
/**
 * @file  pista.hpp
 * @brief Definição da classe pista
 * @details Atributos: distancia da pista, nome da pista
 * @author Victor Hugo Freire Ramalho
 * @since 08/03/2018
 * @date 12/03/2018
 * @copyright Victor Hugo corporacoes
*/
class Pista{
private:
	int distancia;
	string nome;
public: 
	int getdistancia();
	void setdistancia(int d);
	string getname();
	void setname(string n);
		friend ostream& operator << (ostream &o,Pista &pistas);
};
#endif