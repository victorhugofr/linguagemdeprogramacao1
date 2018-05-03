#ifndef CELULAR_HPP
#define CELULAR_HPP
#include "produto.hpp"
#include "duravel.hpp"
class Celular : public Produto, Duravel{
public:
	int quantidade;
};
#endif