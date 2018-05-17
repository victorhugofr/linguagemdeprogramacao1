#include "../include/livro.hpp"
ostream& operator<< (ostream &o,Livro &livro){

    o <<"Tipo: "<<livro.tipo<<endl<<"Titulo : " <<livro.titulo<< endl<<"Ano Lancamento : "<<livro.anodelancamento<<endl<<"ISBN : "<<livro.ISBN<<endl<<"Editora : "<<livro.editora <<endl<<"Autor : "<<livro.autor<<endl<<"*************"<<endl;
	return o;
}