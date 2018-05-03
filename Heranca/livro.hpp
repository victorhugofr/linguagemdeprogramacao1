#ifndef LIVRO_HPP
#define LIVRO_HPP
#include "produto.hpp"
#include "duravel.hpp"
class Livro : public Produto, Duravel{
public:
	int quantidade;
};
#endif