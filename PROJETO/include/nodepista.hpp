#ifndef	NODEPISTA_HPP
#define NODEPISTA_HPP
#include <iostream>
#include <string>
#include "../include/pista.hpp"
using namespace std;
class nodepista{
public:
	Pista data;
	nodepista* prox;
};
#endif