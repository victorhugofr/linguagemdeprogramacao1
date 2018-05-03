#ifndef DURAVEL_HPP
#define DURAVEL_HPP
#include "produto.hpp"
class Duravel : public Produto{
public:
	string material;
	int durabilidade; // em anos
};
#endif