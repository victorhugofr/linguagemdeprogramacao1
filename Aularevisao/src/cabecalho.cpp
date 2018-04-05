#include <iostream>
#include "../include/procedimentos.hpp"
#include "../include/conta.hpp"
using namespace std;
void cabeccalho(Conta *conta){
	int n,c=0,s,agencia,numero,numero1,agencia1;
	while(n!=7){
	cout <<"DIGITE O QUE DESEJA FAZER:"<<endl;
	cout <<"1-CRIAR CONTA:"<<endl;
	cout <<"2-EXCLUIR CONTA:"<<endl;
	cout <<"3-SAQUE:"<<endl;
	cout <<"4-DEPÓSITO:"<<endl;
	cout <<"5-EMISSÃO DE SALDO:"<<endl;
	cout <<"6-TRANSFERENCIA ENTRE CONTAS:"<<endl;
	cout <<"7-SAIR"<<endl;
	cin>>n;
	if(n==1){
		criarconta(c,conta);
		c++;
	}
	/** Saque*/
	else if(n==3){
		cout <<"DIGITE A AGENCIA DA CONTA"<<endl;
		cin>>agencia;
		cout <<"DIGITE O NUMERO DA CONTA"<<endl;
		cin>>numero;
		cout <<"AGORA, O QUANTO DESEJA SACAR"<<endl;
		cin>>s;
		saque(agencia,numero,s,conta);
	}
	else if(n==4){
		cout <<"DIGITE A AGENCIA DA CONTA"<<endl;
		cin>>agencia;
		cout <<"DIGITE O NUMERO DA CONTA"<<endl;
		cin>>numero;
		cout <<"AGORA, O QUANTO DESEJA DEPOSITAR:"<<endl;
		cin>>s;
		depositar(agencia,numero,s,conta);
	}
	else if(n==5){
		cout <<"DIGITE A AGENCIA DA CONTA"<<endl;
		cin>>agencia;
		cout <<"DIGITE O NUMERO DA CONTA"<<endl;
		cin>>numero;
		emissaosaldo(agencia,numero,conta);
	}
	else if(n==6){
		cout <<"DIGITE A AGENCIA DA SUA CONTA"<<endl;
		cin>>agencia;
		cout <<"DIGITE O NUMERO DA SUA CONTA"<<endl;
		cin>>numero;
		cout <<"DIGITE A AGENCIA DA CONTA QUE DESEJA TRANSFERIR"<<endl;
		cin>>agencia1;
		cout <<"DIGITE O NUMERO DA CONTA QUE DESEJA TRANSFERIR"<<endl;
		cin>>numero1;
		cout <<"AGORA, DIGITE A QUANTIDADE QUE DESEJA TRANSFERIR"<<endl;
		cin>>s;
		transferencia(agencia,conta,agencia1,s);
	}
	}
}