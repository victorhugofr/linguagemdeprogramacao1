#include "../include/dvd.hpp"
ostream& operator<< (ostream &o,Dvd &dvd){

    o <<"Tipo: "<<dvd.tipo<<endl<<"Titulo : " <<dvd.titulo<<endl<<"Ano Lancamento : "<<dvd.anodelancamento<<endl<<"Diretor : "<<dvd.diretor<<endl<<"Duracao : "<<dvd.duracao <<endl<<"classificacao : "<<dvd.classificacao<<endl<<"*************"<<endl;
	return o;
}