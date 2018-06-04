#include "sapo.hpp"
#include <iostream>
#include <string>

int Sapo::getpulos(){ return pulos;} /**Funcao que retorna a quantidade de pulos da classe requisitada*/
void Sapo::setpulos(int p){pulos = p;} /**Funcao que determina a quantidade de pulos da classe requisitada*/
int Sapo::getdistancia(){ return distancia;} /**Funcao que retorna a distância percorrida da classe requisitada*/
void Sapo::setdistancia(int d){distancia = d;} /**Funcao que determina a distância percorrida da classe requisitada*/
string Sapo::getname(){return nome;}
void Sapo::setname(string name){nome=name;}
int Sapo::getqtdprovas(){return qtdprovas;}
void Sapo::setqtdprovas(int qp){qtdprovas+=qp;}
int Sapo::getqtdvitorias(){return qtdvitorias;}
void Sapo::setqtdvitorias(int qv){qtdvitorias+=qv;}
void Sapo::pular(){

}
ostream& operator<< (ostream &o,Sapo &sapo){

    o <<"Nome: "<<sapo.getname()<<endl<<"Vitorias: " <<sapo.getqtdvitorias()<<endl<<"Q provas: "<<sapo.getqtdprovas()<<endl<<"*************"<<endl;
	return o;
}