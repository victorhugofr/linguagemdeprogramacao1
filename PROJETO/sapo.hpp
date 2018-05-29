#ifndef	SAPO_HPP
#define SAPO_HPP
#include <iostream>
#include <string>
class Sapo{
private: 
		int distancia; /**Atributo que salva a distância percorrida do sapo*/
		int pulos;	/**Atributo que salva a quantidade de pulos do sapo*/
		string nome;
public: 
		int getdistancia();
		void setdistancia(int d);
		int getpulos();
		void setpulos(int p);
		char *getname();
		void setname(string name);
};
#endif
