#include "lista.hpp"
#include "procedimentos.hpp"
using namespace std;
int menu(){
	int opcao;
	cout<<"MENU DE OPÇOES"<<endl;
	cout<<"1 - CRIAR LISTA"<<endl;
	cout<<"2 - ADICIONAR ELEMENTO EM LISTA"<<endl;
	cout<<"3 - REMOVER ELEMENTO DE LISTA "<<endl;
	cout<<"4 - PROCURAR ELEMENTO EM LISTA"<<endl;
	cout<<"5 - LISTAR ELEMENTOS DE LISTA "<<endl;
	cout<<"0 - SAIR "<<endl;
	cin>>opcao;
	return opcao;
}
int quallista(int g){
	int z;
	cout<<"DE QUAL LISTA VOCE DESEJA FAZER ISSO?"<<endl;
	listarlistas(g);
	cin>>z;
	return z;
}
void listarlistas(int g){
	for (int t=0;t<g;t++){
		cout<< t<< " - "<<lista[t].gettipo()<<endl;
	}
}