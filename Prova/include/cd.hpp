#ifndef CD_HPP
#define CD_HPP
#include <iostream>
#include <string>
using namespace std;
#include "../include/produto.hpp"
class Cd : public Produto{
public:
	string compositor;
	string quantidadedefaixas;
	string gravadora;
	friend ostream& operator << (ostream &o,Cd &cd);
};
#endif