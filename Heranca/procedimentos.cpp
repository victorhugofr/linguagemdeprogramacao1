#include "procedimentos.hpp"
using namespace std;
int qualproduto(){
	int n;
	cout<< "QUAL PRODUTO? "<<endl;
	cout<< "1 - PIZZA"<<endl;
	cout<< "2 - REFRIGERANTE"<<endl;
	cout<< "3 - CHOCOLATE"<<endl;
	cout<< "4 - CARRO"<<endl;
	cout<< "5 - LIVRO"<<endl;
	cout<< "6 - CELULAR"<<endl;
cin >> n;
	return n; 
}
int menu(){
	int n;
	cout<< "MENU: "<<endl;
	cout<< "1 - ADICIONAR PRODUTO "<<endl;
	cout<< "2 - REMOVER PRODUTO "<<endl;
	cout<< "3 - QUANTIDADE DE PRODUTOS NO DEPOSITO "<<endl;
	cout<< "4 - INFORMAR SE O DEPOSITO ESTA VAZIO "<<endl;
	cout<<"5 - INFORMAR O PRODUTO DE MAIOR VALOR "<<endl;
	cout <<"0 - SAIR"<<endl;
	cin >>n;
	return n;
}