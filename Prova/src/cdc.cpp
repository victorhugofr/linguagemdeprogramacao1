#include "../include/cd.hpp"
ostream& operator<< (ostream &o,Cd &cd){

    o <<"Tipo: "<<cd.tipo<<endl<<"Titulo : " <<cd.titulo<< endl<<"Ano Lancamento : "<<cd.anodelancamento<<endl<<"Compositor : "<<cd.compositor<<endl<<"Quantidade de faixas : "<<cd.quantidadedefaixas <<endl<<"gravadora : "<<cd.gravadora<<endl<<"*************"<<endl;
	return o;
}