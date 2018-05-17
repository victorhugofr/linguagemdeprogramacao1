#ifndef PRODUTO_HPP
#define PRODUTO_HPP
#include <iostream>
#include <string>
using namespace std;
class Produto{
public:
	string titulo;
	string tipo;
	string anodelancamento;
	friend ostream& operator << (ostream &o,Produto &produto);
};
#endif