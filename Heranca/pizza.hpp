#ifndef PIZZA_HPP
#define PIZZA_HPP
#include "produto.hpp"
#include "nduravel.hpp"
class Pizza : public Produto, NDuravel{
public:
	int quantidade;
};
#endif