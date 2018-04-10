/**
 * @file  conta.cpp
 * @brief Exercicio de revisao com o objetivo de simular um banco
 * @author Victor Hugo Freire Ramalho
 * @since 27/03/2018
 * @date 29/03/2018
 * @copyright Victor Hugo corporacoes
*/
#include <iostream>
#include "../include/conta.hpp"
using namespace std;
Conta::Conta(){}
int Conta::getagencia(){return agencia;}
int Conta::getnumero(){return numero;}
int Conta::getsaldo(){return saldo;}
void Conta::setagencia(int a){agencia=a;}
void Conta::setnumero(int a){numero=a;}
void Conta::setsaldo(int a){saldo=a;}
void Conta::setextrato(int n, int a){
	if(n==3){
		saque[qtdsaque]=a;
		qtdsaque++;
	}else if(n==4){
		deposito[qtddeposito]=a;
		qtddeposito++;
	}else if(n==5){
		transferencia[qtdtransferencia]=a;
		qtdtransferencia++;
	}
}
void Conta::getextrato(){
	if(qtdsaque>0){
		for(int i=0;i<qtdsaque;i++){
			cout<<"VOCE FEZ "<<qtdsaque<<" SAQUES, O "<<i+1<< " NO VALOR DE "<<saque[i]<<endl;
		}
	}
	if(qtddeposito>0){
		for(int i=0;i<qtddeposito;i++){
			cout<<"VOCE FEZ "<<qtddeposito<<" DEPOSITOS, O "<<i+1<< " NO VALOR DE "<<deposito[i]<<endl;
		}
	}
	if(qtdtransferencia>0){
		for(int i=0;i<qtdtransferencia;i++){
			cout<<"VOCE FEZ "<<qtdtransferencia<<" TRANSFERENCIAS, O "<<i+1<< " NO VALOR DE "<<transferencia[i]<<endl;
		}
	}
}