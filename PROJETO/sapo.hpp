#ifndef	SAPO_HPP
#define SAPO_HPP
#include <iostream>
#include <string>
using namespace std;
class Sapo{
private: 
		int distancia; /**Atributo que salva a distância percorrida do sapo*/
		int pulos;	/**Atributo que salva a quantidade de pulos do sapo*/
		int qtdprovas = 0;
		int qtdvitorias = 0;
		string nome;
public: 
		int getdistancia();
		void setdistancia(int d);
		int getpulos();
		void setpulos(int p);
		string getname();
		void setname(string name);
		int getqtdprovas();
		void setqtdprovas(int qp);
		int getqtdvitorias();
		void setqtdvitorias(int qv);
		void pular();
		friend ostream& operator << (ostream &o,Sapo &sapo);
};
#endif
