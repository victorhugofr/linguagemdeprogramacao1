#ifndef LIVRO_HPP
#define LIVRO_HPP
#include <iostream>
#include <string>
using namespace std;
#include "../include/produto.hpp"
class Livro: public Produto {
public:
	string autor;
	string editora;
	string ISBN;
	friend ostream& operator << (ostream &o,Livro &livro);
};
#endif