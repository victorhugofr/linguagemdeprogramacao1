#include "../include/pista.hpp"
using namespace std;
int Pista::getdistancia(){return distancia;}
void Pista::setdistancia(int d){distancia = d;}
string Pista::getname(){return nome;}
void Pista::setname(string n){nome=n;}
ostream& operator<< (ostream &o,Pista &pistas){

    o <<"Nome da pista: "<<pistas.getname()<<endl<<"Distancia: "<<pistas.getdistancia()<<endl<<"*************"<<endl;
	return o;
}