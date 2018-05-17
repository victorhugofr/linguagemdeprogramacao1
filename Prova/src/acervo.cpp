#include "../include/acervo.hpp"
void Acervo::inserirlivro(Livro *livro){
	Produto *produto=livro;
	this->vetor.push_back(produto);  // TROCAR N
}
void Acervo::inserircd(Cd *cd){
	Produto *produto=cd;
	this->vetor.push_back(produto); 
}
void Acervo::inserirdvd(Dvd *dvd){
	Produto *produto=dvd;
	this->vetor.push_back(produto); 
}
void Acervo::verAcervo(){
    for(int i = 0; i<(int)this->vetor.size();i++){
        if(this->vetor[i]->tipo=="Livro"){
            Livro *t = (Livro*)(this->vetor[i]);
            cout << *t;
        }
        else if(this->vetor[i]->tipo== "CD"){
            Cd *cd = (Cd*)(this->vetor[i]);
            cout << *cd;
        }
        else if (this->vetor[i]->tipo== "DVD"){
            Dvd *dvd = (Dvd*)(this->vetor[i]);
            cout << *dvd;
        }
    }
}
void Acervo::remover(string titulo,string tipo, string anodelancamento){
    for(int i = 0; i<(int)this->vetor.size();i++){
        if(this->vetor[i]->titulo == titulo && this->vetor[i]->tipo == tipo && this->vetor[i]->anodelancamento == anodelancamento){
            this->vetor.erase(vetor.begin()+i);
        }
    }
        cout << "Produto nao encontrado"<<endl;
}
void Acervo::editar(string titulo,string tipo, string anodelancamento,string titulo1,string lancamento1){
    for(int i = 0; i<(int)this->vetor.size();i++){
        if(this->vetor[i]->titulo == titulo && this->vetor[i]->tipo == tipo && this->vetor[i]->anodelancamento == anodelancamento){       	  
				this->vetor[i]->titulo=titulo1;
				this->vetor[i]->anodelancamento=lancamento1;
				break;
        }
    }
}