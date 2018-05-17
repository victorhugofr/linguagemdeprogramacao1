#include "../include/produto.hpp"
ostream& operator<< (ostream &o,Produto &produto){

    o <<"Tipo: "<<produto.tipo<< "| "<<endl<<"Titulo : " <<produto.titulo<< "| "<<endl<<" Ano Lancamento : "<<produto.anodelancamento<<"| "<<endl;
    return o;
}