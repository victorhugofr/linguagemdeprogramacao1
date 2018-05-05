#include <iostream>
#include <string>
#include "pizza.hpp"
#include "celular.hpp"
#include "carro.hpp"
#include "refrigerante.hpp"
#include "livro.hpp"
#include "chocolate.hpp"
#include "procedimentos.hpp"
using namespace std;
int main(){
string nome1,marca1,descricao1,fabricacao1;
string mpred, datav,genero1;
float preco1;
int durabilidade1,i;

Pizza *pizza;
pizza = new Pizza[100];
int pic=0;

Refrigerante *refrigerante;
refrigerante = new Refrigerante[100];
int rec=0;

Chocolate *chocolate;
chocolate = new Chocolate[100];
int chc=0;

Carro *carro;
carro = new Carro[100];
int cac=0;

Livro *livro;
livro = new Livro[100];
int lic=0;

Celular *celular;
celular = new Celular[100];
int cec=0;


	switch(menu()){
		case 1:
			i=qualproduto();
			if(i==1 || i==2 || i==3){
				if(i==1){
					cout<<"Informe o nome "<<endl;
					cin>>nome1;
					pizza[pic].nome=nome1;
					cout<<"Informe o preco "<<endl;
					cin>>preco1;
					pizza[pic].preco=preco1;
					cout<<"Informe a marca "<<endl;
					cin>>marca1;
					pizza[pic].marca=marca1;
					cout<<"Informe a descricao "<<endl;
					cin>>descricao1;
					pizza[pic].descricao=descricao1;
					cout<<"Informe a data de fabricacao "<<endl;
					cin>>fabricacao1;
					pizza[pic].datafab=fabricacao1;
					cout<<"Informe o material predominante "<<endl;
					cin>>mpred;
					pizza[pic].material=mpred;
					cout<<"Informe a durabilidade(em anos) "<<endl;
					cin>>durabilidade1;
					pizza[pic].durabilidade=durabilidade1;
					pic++;
				}
				if (i==2){
					cout<<"Informe o nome "<<endl;
					cin>>nome1;
					refrigerante[rec].nome=nome1;
					cout<<"Informe o preco "<<endl;
					cin>>preco1;
					refrigerante[rec].preco=preco1;
					cout<<"Informe a marca "<<endl;
					cin>>marca1;
					refrigerante[rec].marca=marca1;
					cout<<"Informe a descricao "<<endl;
					cin>>descricao1;
					refrigerante[rec].descricao=descricao1;
					cout<<"Informe a data de fabricacao "<<endl;
					cin>>fabricacao1;
					refrigerante[rec].datafab=fabricacao1;
					cout<<"Informe o material predominante "<<endl;
					cin>>mpred;
					refrigerante[rec].material=mpred;
					cout<<"Informe a durabilidade(em anos) "<<endl;
					cin>>durabilidade1;
					refrigerante[rec].durabilidade=durabilidade1;
					rec++;
				}
				if(i==3){
					cout<<"Informe o nome "<<endl;
					cin>>nome1;
					chocolate[chc].nome=nome1;
					cout<<"Informe o preco "<<endl;
					cin>>preco1;
					chocolate[chc].preco=preco1;
					cout<<"Informe a marca "<<endl;
					cin>>marca1;
					chocolate[chc].marca=marca1;
					cout<<"Informe a descricao "<<endl;
					cin>>descricao1;
					chocolate[chc].descricao=descricao1;
					cout<<"Informe a data de fabricacao "<<endl;
					cin>>fabricacao1;
					chocolate[chc].datafab=fabricacao1;
					cout<<"Informe o material predominante "<<endl;
					cin>>mpred;
					chocolate[chc].material=mpred;
					cout<<"Informe a durabilidade(em anos) "<<endl;
					cin>>durabilidade1;
					chocolate[chc].durabilidade=durabilidade1;
					chc++;
				}
			} else if(i==4 || i==5 || i==6){
				if(i==4){
					cout<<"Informe o nome "<<endl;
					cin>>nome1;
					carro[cac].nome=nome1;
					cout<<"Informe o preco "<<endl;
					cin>>preco1;
					carro[cac].preco=preco1;
					cout<<"Informe a marca "<<endl;
					cin>>marca1;
					carro[cac].marca=marca1;
					cout<<"Informe a descricao "<<endl;
					cin>>descricao1;
					carro[cac].descricao=descricao1;
					cout<<"Informe a data de fabricacao "<<endl;
					cin>>fabricacao1;
					carro[cac].datafab=fabricacao1;
					cout<<"Informe a data de validade "<<endl;
					cin>>datav;
					carro[cac].dataval=datav;
					cout<<"Informe o genero(alimenticio,limpeza,roupa,uso pessoal) "<<endl;
					cin>>genero1;
					carro[cac].genero=genero1;
					cac++;
				}
				if (i==5){
					cout<<"Informe o nome "<<endl;
					cin>>nome1;
					livro[lic].nome=nome1;
					cout<<"Informe o preco "<<endl;
					cin>>preco1;
					livro[lic].preco=preco1;
					cout<<"Informe a marca "<<endl;
					cin>>marca1;
					livro[lic].marca=marca1;
					cout<<"Informe a descricao "<<endl;
					cin>>descricao1;
					livro[lic].descricao=descricao1;
					cout<<"Informe a data de fabricacao "<<endl;
					cin>>fabricacao1;
					livro[lic].datafab=fabricacao1;
					cout<<"Informe a data de validade "<<endl;
					cin>>datav;
					livro[lic].dataval=datav;
					cout<<"Informe o genero(alimenticio,limpeza,roupa,uso pessoal) "<<endl;
					cin>>genero1;
					livro[lic].genero=genero1;
					lic++;
				}
				if(i==6){
					cout<<"Informe o nome "<<endl;
					cin>>nome1;
					celular[cec].nome=nome1;
					cout<<"Informe o preco "<<endl;
					cin>>preco1;
					celular[cec].preco=preco1;
					cout<<"Informe a marca "<<endl;
					cin>>marca1;
					celular[cec].marca=marca1;
					cout<<"Informe a descricao "<<endl;
					cin>>descricao1;
					celular[cec].descricao=descricao1;
					cout<<"Informe a data de fabricacao "<<endl;
					cin>>fabricacao1;
					celular[cec].datafab=fabricacao1;
					cout<<"Informe a data de validade "<<endl;
					cin>>datav;
					celular[cec].dataval=datav;
					cout<<"Informe o genero(alimenticio,limpeza,roupa,uso pessoal) "<<endl;
					cin>>genero1;
					celular[cec].genero=genero1;
					cec++;
				}
			}
	}

}