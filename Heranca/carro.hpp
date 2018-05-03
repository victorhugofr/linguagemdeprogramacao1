#ifndef CARRO_HPP
#define CARRO_HPP
#include "produto.hpp"
#include "duravel.hpp"
class Carro : public Produto, Duravel{
public:
	int quantidade;
};
#endif