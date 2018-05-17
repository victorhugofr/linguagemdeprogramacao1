#ifndef ACERVO_HPP
#define ACERVO_HPP
#include <iostream>
#include <string>
#include <vector>
#include "../include/cd.hpp"
#include "../include/livro.hpp"
#include "../include/dvd.hpp"
#include "../include/produto.hpp"
class Acervo{
public:
	vector<Produto*> vetor; // string titulo
	int qtdlivro = 0;
	int qtdcd = 0;
	int qtddvd = 0;
	void inserirlivro(Livro *item);
    void inserircd(Cd *item);
    void inserirdvd(Dvd *item);
    void verAcervo();
    void remover(string titulo,string tipo, string anodelancamento);
    void editar(string titulo,string tipo, string anodelancamento,string titulo1,string lancamento1);
};
#endif