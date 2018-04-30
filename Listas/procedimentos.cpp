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
int quallista(){
	int z;
	cout<<"DE QUAL LISTA VOCE DESEJA FAZER ISSO?"<<endl;
	listarlistas();
	cin>>z;
	return z;
}
void listarlistas(){
	cout <<" 1- LISTA DE INT" <<endl;
	cout<<" 2 - LISTA DE DOUBLE"<<endl;
}