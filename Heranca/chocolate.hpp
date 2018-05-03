#ifndef CHOCOLATE_HPP
#define CHOCOLATE_HPP
#include "produto.hpp"
#include "nduravel.hpp"
class Chocolate : public Produto, NDuravel{
public:
	int quantidade;
};
#endif