#ifndef DVD_HPP
#define DVD_HPP
#include <iostream>
#include <string>
using namespace std;
#include "../include/produto.hpp"
class Dvd: public Produto {
public:
	string diretor;
	string duracao;
	string classificacao;
	friend ostream& operator << (ostream &o,Dvd &dvd);
};
#endif