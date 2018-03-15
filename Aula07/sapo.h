#ifndef SAPO_H
#define DADO_H

class Sapo{
private: 
		char nome[30];
		int distancia;
		int pulos;
public: 
		int getdistancia();
		void setdistancia();
		int getpulos();
		void setpulos();
		char getnome();
		void setnome();
};
#endif
