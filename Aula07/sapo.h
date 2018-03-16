#ifndef	SAPO_H
#define SAPO_H
#include <iostream>
#include <string>
class Sapo{
private: 
		char *nome;
		int distancia;
		int pulos;
public: 
		int getdistancia();
		void setdistancia(int d);
		int getpulos();
		void setpulos(int p);
		char *getnome();
		void setnome(char n[]);
};
#endif
