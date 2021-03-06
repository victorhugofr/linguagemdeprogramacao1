/**
 * @file  procedimentos.cpp
 * @brief Exercicio de revisao com o objetivo de simular um banco
 * @author Victor Hugo Freire Ramalho
 * @since 27/03/2018
 * @date 29/03/2018
 * @copyright Victor Hugo corporacoes
*/
#include "../include/cabecalho.hpp"
#include "../include/conta.hpp"
#include <iostream>
using namespace std;
void criarconta(int n, Conta *conta){
		conta[n].setagencia(n);
		cout <<"CONTA CRIADAS COM SUCESSO:"<<endl;
		cout <<"AGENCIA DA CONTA: "<<n<<endl;
		conta[n].setnumero(1000-n);
		cout <<"NUMERO DA CONTA: "<<1000-n<<endl;
		conta[n].setsaldo(0);
		cout <<"SALDO DA CONTA: "<<0<<endl;
}
void extrato(int n, Conta *conta){
	conta[n].getextrato();
}
void saque(int agencia, int s, Conta *conta){
	int novo;
		novo=conta[agencia].getsaldo()-s;
		if(novo<0){
			cout <<"VOCE NAO TEM DINHEIRO SUFICIENTE"<<endl;
		}else{
			conta[agencia].setsaldo(novo);
			cout <<"SAQUE REALIZADO COM SUCESSO, SEU NOVO SALDO NA CONTA É DE : "<<novo<<"RS"<<endl;
		}
		conta[agencia].setextrato(3,s);
}
void depositar(int agencia, int s, Conta *conta){
	int novo;
		novo=conta[agencia].getsaldo()+s;
		if(s<0){
			cout <<"NAO E POSSIVEL DEPOSITAR VALOR NEGATIVO"<<endl;
		}else{
			conta[agencia].setsaldo(novo);
			cout <<"DEPOSITO REALIZADO COM SUCESSO, SEU NOVO SALDO NA CONTA É DE : "<<novo<<"RS"<<endl;
		}
		conta[agencia].setextrato(4,s);
}
void emissaosaldo(int agencia, Conta *conta){
	cout <<"SEU SALDO NA CONTA É DE : "<<conta[agencia].getsaldo()<<"RS"<<endl;
}
void transferencia(int agencia, Conta *conta,int agencia1, int s){
	int saldo;
		saldo=conta[agencia].getsaldo()-s;
		conta[agencia1].setsaldo(conta[agencia1].getsaldo()+s);
		if(saldo<0){
			cout <<"VOCE NAO TEM DINHEIRO SUFICIENTE PARA TRANSFERIR"<<endl;
		}else{
			conta[agencia].setsaldo(saldo);
			cout <<"DEPOSITO REALIZADO COM SUCESSO, SEU NOVO SALDO NA CONTA É DE : "<<saldo<<"RS"<<endl;
		}
		conta[agencia].setextrato(5,s);

}