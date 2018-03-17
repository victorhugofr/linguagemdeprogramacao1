#ifndef	SAPO_H
#define SAPO_H
#include <iostream>
#include <string>
class Sapo{
private: 
		int distancia;
		int pulos;
public: 
		int getdistancia();
		void setdistancia(int d);
		int getpulos();
		void setpulos(int p);
};
#endif