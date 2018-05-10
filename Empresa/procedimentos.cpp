#include "procedimentos.hpp"
using namespace std;
int menuempresa(Empresa *empresa, int qual){
	int i;
	cout<<"MENU EMPRESA:"<<endl;
	cout<<"1 - ADICIONAR FUNCIONARIO"<<endl;
	cout<<"2 - AUMENTAR (EM %) O SALARIO DE TODOS OS FUNCIONARIOS"<<endl;
	cout<<"3 - LISTAR FUNCIONARIOS CONTRATADOS HA MENOS DE 90 DIAS"<<endl;
	cin>>i;
	return i;
}
int menuprincipal(Empresa *empresa, int qtd){
	int i,a,t;
	cout<<" O QUE DESEJA FAZER? "<<endl;
	cout<<"1 - CRIAR EMPRESA"<<endl;
	cout<<"2 - GERIR EMPRESA EXISTENTE"<<endl;
	cin>>i;
	string nome,cnpj;
	if(i==1){
		cout<<"Digite o nome da sua empresa"<<endl;
		cin>>empresa[qtd].nome;
		cout<<"Digite o CNPJ da sua empresa"<<endl;
		cin>>empresa[qtd].cnpj;
		cout<<"***********************"<<endl;
		cout<<"EMPRESA CRIADA COM SUCESSO!"<<endl;
		cout<<"***********************"<<endl;
		return 0;
	} else if (i==2){
			return 1;
				
	}
}