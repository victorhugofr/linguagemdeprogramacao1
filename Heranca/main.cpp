#include <iostream>
#include <string>
using namespace std;
int main(){
string nome,marca,descricao,fabricacao;
string mpred, datav,genero;
int preco,durabilidade;
	switch(menu()){
		case 1:
		i=qualproduto();
		if(i==1 || i==2 || i==3){
			cout<<"Informe o nome "<<endl;
			cin>>nome;
			cout<<"Informe o preco "<<endl;
			cin>>preco;
			cout<<"Informe a marca "<<endl;
			cin>>marca;
			cout<<"Informe a descricao "<<endl;
			cin>>descricao;
			cout<<"Informe a data de fabricacao "<<endl;
			cin>>fabricacao;
			cout<<"Informe o material predominante "<<endl;
			cin>>mpred;
			cout<<"Informe a durabilidade "<<endl;
			cin>>durabilidade;
		} else if(i==4 || i==5 || i==6){
			cout<<"Informe o nome "<<endl;
			cin>>nome;
			cout<<"Informe o preco "<<endl;
			cin>>preco;
			cout<<"Informe a marca "<<endl;
			cin>>marca;
			cout<<"Informe a descricao "<<endl;
			cin>>descricao;
			cout<<"Informe a data de fabricacao "<<endl;
			cin>>fabricacao;
			cout<<"Informe a data de validade "<<endl;
			cin>>datav;
			cout<<"Informe o genero(alimenticio,limpeza,roupa,uso pessoal) "<<endl;
			cin>>genero;
		}
	}

}