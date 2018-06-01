#include "pista.hpp"
using namespace std;
ostream& operator<< (ostream &o,Pista &pistas){

    o <<"Nome da pista: "<<pistas.nome<<endl<<"Distancia: "<<pistas.distancia<<endl<<"*************"<<endl;
	return o;
}