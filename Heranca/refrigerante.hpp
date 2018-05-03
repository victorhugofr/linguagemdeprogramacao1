#ifndef REFRIGERANTE_HPP
#define REFRIGERANTE_HPP
#include "produto.hpp"
#include "nduravel.hpp"
class Refrigerante : public Produto, NDuravel{
public:
	int quantidade;
};
#endif