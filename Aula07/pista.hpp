#ifndef	PISTA_HPP
#define PISTA_HPP
#include <iostream>
#include <string>
using namespace std;
class Pista{
public: 
		int distancia;
		string nome;
		friend ostream& operator << (ostream &o,Pista &pistas);
};
#endif