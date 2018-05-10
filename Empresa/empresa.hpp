#ifndef EMPRESA_HPP
#define EMPRESA_HPP
#include <iostream>
#include <string>
#include "funcionario.hpp"
#include "gerente.hpp"
#include "secretaria.hpp"
#include "operario.hpp"
class Empresa{
	string nome;
	string cnpj;
	Operario *operario;
	operario = new Operario[10];

	Secretaria *secretaria;
	secretaria = new Secretaria[10];

	Gerente *gerente;
	gerente = new Gerente[10];

	int qoperario = 0;
	int qsecretaria = 0;
	int qgerente = 0;

};
#endif