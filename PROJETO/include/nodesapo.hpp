#ifndef	NODESAPO_HPP
#define NODESAPO_HPP
#include <iostream>
#include <string>
#include "../include/sapo.hpp"
using namespace std;
class nodesapo{
public:
	Sapo data;
	nodesapo* prox;
};
#endif