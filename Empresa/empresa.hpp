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
	Operario operario;
	Secretaria secretaria;
	Gerente gerente;

	int qoperario = 0;
	int qsecretaria = 0;
	int qgerente = 0;

};
#endif