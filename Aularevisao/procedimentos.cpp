#include "cabecalho.hpp"
#include "conta.hpp"
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
void saque(int agencia,int numero, int s, Conta *conta){
	int novo;
		novo=conta[agencia].getsaldo()-s;
		if(novo<0){
			cout <<"VOCE NAO TEM DINHEIRO SUFICIENTE"<<endl;
		}else{
			conta[agencia].setsaldo(novo);
			cout <<"SAQUE REALIZADO COM SUCESSO, SEU NOVO SALDO NA CONTA É DE : "<<novo<<"RS"<<endl;
		}
}
void depositar(int agencia,int numero, int s, Conta *conta){
	int novo;
		novo=conta[agencia].getsaldo()+s;
		if(s<0){
			cout <<"NAO E POSSIVEL DEPOSITAR VALOR NEGATIVO"<<endl;
		}else{
			conta[agencia].setsaldo(novo);
			cout <<"DEPOSITO REALIZADO COM SUCESSO, SEU NOVO SALDO NA CONTA É DE : "<<novo<<"RS"<<endl;
		}
}
void emissaosaldo(int agencia,int numero, Conta *conta){
	cout <<"SEU SALDO NA CONTA É DE : "<<conta[agencia].getsaldo()<<"RS"<<endl;
}
void transferencia(int agencia, Conta *conta,int agencia1, int s){
	int saldo,saldo2;
		saldo=conta[agencia].getsaldo()-s;
		saldo2=conta[agencia1].getsaldo()+s;
		conta[agencia1].setsaldo(conta[agencia1].getsaldo()+s);
		if(saldo<0){
			cout <<"VOCE NAO TEM DINHEIRO SUFICIENTE PARA TRANSFERIR"<<endl;
		}else{
			conta[agencia].setsaldo(saldo);
			cout <<"DEPOSITO REALIZADO COM SUCESSO, SEU NOVO SALDO NA CONTA É DE : "<<saldo<<"RS"<<endl;
		}

}