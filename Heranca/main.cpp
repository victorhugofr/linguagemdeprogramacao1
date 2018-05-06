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
int a;
while(a!=0){
	a=menu();
	
		if(a==1){
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
		else if(a==2){
			i=qualproduto();
				if(i==1){
					cout << "QUAIS DESTAS PIZZAS DESEJA REMOVER DO ESTOQUE? INFORME O NOME E A DATA DE FABRICACAO" << endl;
					for(int z=0;z<pic;z++){
						cout << pizza[z].nome << "     -    DATA FAB: " << pizza[z].datafab<<endl;
					}
					cin>> nome1;
					cin>> fabricacao1;
					int j,pos;
					for(j=0;j<pic;j++){
						if(pizza[j].nome == nome1 && pizza[j].datafab==fabricacao1){
							pos=j;
							break;
						}
					}
					for(int z=pos;z<pic;z++){
							pizza[z].nome = pizza[z+1].nome;
							pizza[z].preco= pizza[z+1].preco;
							pizza[z].marca=pizza[z+1].marca;
							pizza[z].descricao=pizza[z+1].descricao;
							pizza[z].datafab=pizza[z+1].datafab;
							pizza[z].material=pizza[z+1].material;
							pizza[z].durabilidade=pizza[z+1].durabilidade;
					}
					pic--;
					cout  <<" PIZZA REMOVIDA, LISTA DE PIZZAS: "<<endl;
					for(int z=0;z<pic;z++){
						cout << pizza[z].nome << "     -    DATA FAB: " << pizza[z].datafab<<endl;
					}
				}
				else if(i==2){
					cout << "QUAIS DESTES REFRIGERANTES DESEJA REMOVER DO ESTOQUE? INFORME O NOME E A DATA DE FABRICACAO" << endl;
					for(int z=0;z<rec;z++){
						cout << refrigerante[z].nome << "     -    DATA FAB: " << refrigerante[z].datafab<<endl;
					}
					cin>> nome1;
					cin>> fabricacao1;
					int j,pos;
					for(j=0;j<rec;j++){
						if(refrigerante[j].nome == nome1 && refrigerante[j].datafab==fabricacao1){
							pos=j;
							break;
						}
					}


					// pizza ,refrigerante, chocolate, carro,livro,celular



					for(int z=pos;z<rec;z++){
							refrigerante[z].nome = refrigerante[z+1].nome;
							refrigerante[z].preco= refrigerante[z+1].preco;
							refrigerante[z].marca=refrigerante[z+1].marca;
							refrigerante[z].descricao=refrigerante[z+1].descricao;
							refrigerante[z].datafab=refrigerante[z+1].datafab;
							refrigerante[z].material=refrigerante[z+1].material;
							refrigerante[z].durabilidade=refrigerante[z+1].durabilidade;
					}
					cout  <<" REFRIGERANTE REMOVIDO, LISTA DE REFRIGERANTES: "<<endl;
					rec--;
					for(int z=0;z<rec;z++){
						cout << refrigerante[z].nome << "     -    DATA FAB: " << refrigerante[z].datafab<<endl;
					}
				}
				else if(i==3){
					cout << "QUAIS DESTES CHOCOLATES DESEJA REMOVER DO ESTOQUE? INFORME O NOME E A DATA DE FABRICACAO" << endl;
					for(int z=0;z<chc;z++){
						cout << chocolate[z].nome << "     -    DATA FAB: " << chocolate[z].datafab<<endl;
					}
					cin>> nome1;
					cin>> fabricacao1;
					int j,pos;
					for(j=0;j<chc;j++){
						if(chocolate[j].nome == nome1 && chocolate[j].datafab==fabricacao1){
							pos=j;
							break;
						}
					}
					for(int z=pos;z<chc;z++){
							chocolate[z].nome = chocolate[z+1].nome;
							chocolate[z].preco= chocolate[z+1].preco;
							chocolate[z].marca=chocolate[z+1].marca;
							chocolate[z].descricao=chocolate[z+1].descricao;
							chocolate[z].datafab=chocolate[z+1].datafab;
							chocolate[z].material=chocolate[z+1].material;
							chocolate[z].durabilidade=chocolate[z+1].durabilidade;
					}
					cout  <<" CHOCOLATE REMOVIDO, LISTA DE CHOCOLATES: "<<endl;
					chc--;
					for(int z=0;z<chc;z++){
						cout << chocolate[z].nome << "     -    DATA FAB: " << chocolate[z].datafab<<endl;
					}
				}
				else if(i==4){ // CARRO LIVRO CELULAR
					cout << "QUAIS DESTES CARROS DESEJA REMOVER DO ESTOQUE? INFORME O NOME E A DATA DE FABRICACAO" << endl;
					for(int z=0;z<cac;z++){
						cout << carro[z].nome << "     -    DATA FAB: " << carro[z].datafab<<endl;
					}
					cin>> nome1;
					cin>> fabricacao1;
					int j,pos;
					for(j=0;j<cac;j++){
						if(carro[j].nome == nome1 && carro[j].datafab==fabricacao1){
							pos=j;
							break;
						}
					}
					for(int z=pos;z<cac;z++){
							carro[z].nome = carro[z+1].nome;
							carro[z].preco= carro[z+1].preco;
							carro[z].marca=carro[z+1].marca;
							carro[z].descricao=carro[z+1].descricao;
							carro[z].datafab=carro[z+1].datafab;
							carro[z].genero=carro[z+1].genero;
							carro[z].dataval=carro[z+1].dataval;
					}
					cout  <<" CARRO REMOVIDO, LISTA DE carroS: "<<endl;
					cac--;
					for(int z=0;z<cac;z++){
						cout << carro[z].nome << "     -    DATA FAB: " << carro[z].datafab<<endl;
					}
				}
				else if(i==5){// CARRO LIVRO CELULAR
					cout << "QUAIS DESTES LIVROS DESEJA REMOVER DO ESTOQUE? INFORME O NOME E A DATA DE FABRICACAO" << endl;
					for(int z=0;z<lic;z++){
						cout << livro[z].nome << "     -    DATA FAB: " << livro[z].datafab<<endl;
					}
					cin>> nome1;
					cin>> fabricacao1;
					int j,pos;
					for(j=0;j<lic;j++){
						if(livro[j].nome == nome1 && livro[j].datafab==fabricacao1){
							pos=j;
							break;
						}
					}
					for(int z=pos;z<lic;z++){
							livro[z].nome = livro[z+1].nome;
							livro[z].preco= livro[z+1].preco;
							livro[z].marca=livro[z+1].marca;
							livro[z].descricao=livro[z+1].descricao;
							livro[z].datafab=livro[z+1].datafab;
							livro[z].genero=livro[z+1].genero;
							livro[z].dataval=livro[z+1].dataval;
					}
					cout  <<" livro REMOVIDO, LISTA DE livroS: "<<endl;
					lic--;
					for(int z=0;z<lic;z++){
						cout << livro[z].nome << "     -    DATA FAB: " << livro[z].datafab<<endl;
					}
				}
				else if (i==6){
					cout << "QUAIS DESTES LIVROS DESEJA REMOVER DO ESTOQUE? INFORME O NOME E A DATA DE FABRICACAO" << endl;
					for(int z=0;z<cec;z++){
						cout << celular[z].nome << "     -    DATA FAB: " << celular[z].datafab<<endl;
					}
					cin>> nome1;
					cin>> fabricacao1;
					int j,pos;
					for(j=0;j<cec;j++){
						if(celular[j].nome == nome1 && celular[j].datafab==fabricacao1){
							pos=j;
							break;
						}
					}
					for(int z=pos;z<cec;z++){
							celular[z].nome = celular[z+1].nome;
							celular[z].preco= celular[z+1].preco;
							celular[z].marca=celular[z+1].marca;
							celular[z].descricao=celular[z+1].descricao;
							celular[z].datafab=celular[z+1].datafab;
							celular[z].genero=celular[z+1].genero;
							celular[z].dataval=celular[z+1].dataval;
					}
					cout  <<" celular REMOVIDO, LISTA DE celularS: "<<endl;
					cec--;
					for(int z=0;z<cec;z++){
						cout << celular[z].nome << "     -    DATA FAB: " << celular[z].datafab<<endl;
					}
				}
			}
			else if (a==3){
				cout<<"EXISTEM "<<pic+rec+chc+cac+lic+cec<<" PRODUTOS NO DEPOSITO"<<endl;
				cout<<"DESEJA SABER DETALHADAMENTE? (1 - SIM, 2 - NAO)"<<endl;
				cin>>i;
				if(i==1){
					cout <<"EXISTEM " <<pic << " PIZZAS NO ESTOQUE"<<endl;
					cout << "EXISTEM "<<rec<<" REFRIGERANTES NO ESTOQUE"<<endl;
					cout << "EXISTEM "<<chc<<" CHOCOLATES NO ESTOQUE"<<endl;
					cout << "EXISTEM "<<cac<<" CARROS NO ESTOQUE"<<endl;
					cout << "EXISTEM "<<lic<<" LIVROS NO ESTOQUE"<<endl;
					cout << "EXISTEM "<<cec<<" CELULARES NO ESTOQUE"<<endl;
				}
			}

			else if (a==4){
				if((pic+rec+chc+chc+cac+lic+cec) == 0){
					cout<<"O DEPOSITO ESTA VAZIO"<<endl;
				}else{
					cout<<"O DEPOSITO POSSUI PRODUTOS"<<endl;
				}
			}
			else if(a==5){
				int maiorpreco=0,qproduto,qposicao;
				for(int n=0;n<pic;n++){
					if(pizza[n].preco>maiorpreco){
						maiorpreco=pizza[n].preco;
						qproduto=1;
						qposicao=n;
					}
				}
				for(int n=0;n<rec;n++){
					if(refrigerante[n].preco>maiorpreco){
						maiorpreco=refrigerante[n].preco;
						qproduto=2;
						qposicao=n;
					}
				}
				for(int n=0;n<chc;n++){
					if(chocolate[n].preco>maiorpreco){
						maiorpreco=chocolate[n].preco;
						qproduto=3;
						qposicao=n;
					}
				}
				for(int n=0;n<cac;n++){
					if(carro[n].preco>maiorpreco){
						maiorpreco=carro[n].preco;
						qproduto=4;
						qposicao=n;
					}
				}
				for(int n=0;n<lic;n++){
					if(livro[n].preco>maiorpreco){
						maiorpreco=livro[n].preco;
						qproduto=5;
						qposicao=n;
					}
				}
				for(int n=0;n<cec;n++){
					if(celular[n].preco>maiorpreco){
						maiorpreco=celular[n].preco;
						qproduto=6;
						qposicao=n;
					}
				}
				if(qproduto==1){
					cout<< "O PRODUTO COM MAIOR VALOR NO DEPOSITO FOI A PIZZA "<<pizza[qposicao].nome <<endl;
					cout<<"------Marca: "<< pizza[qposicao].marca<<endl;
					cout<<"------Descricao: "<<pizza[qposicao].descricao<<endl;
				    cout<<"------Data de fabricacao: "<<pizza[qposicao].datafab<<endl;
					cout<<"------Material: "<<pizza[qposicao].material<<endl;
					cout<<"------Durabilidade: "<<pizza[qposicao].durabilidade<<endl;
					cout<<"COM O PRECO DE "<<maiorpreco<<endl;
				}else if (qproduto==2){
					cout<< "O PRODUTO COM MAIOR VALOR NO DEPOSITO FOI O CHOCOLATE "<<chocolate[qposicao].nome <<endl;
					cout<<"------Marca: "<< chocolate[qposicao].marca<<endl;
					cout<<"------Descricao: "<<chocolate[qposicao].descricao<<endl;
				    cout<<"------Data de fabricacao: "<<chocolate[qposicao].datafab<<endl;
					cout<<"------Material: "<<chocolate[qposicao].material<<endl;
					cout<<"------Durabilidade: "<<chocolate[qposicao].durabilidade<<endl;
					cout<<"COM O PRECO DE "<<chocolate[qposicao].preco<<endl;
				}else if(qproduto==3){
					cout<< "O PRODUTO COM MAIOR VALOR NO DEPOSITO FOI REFRIGERANTE "<<refrigerante[qposicao].nome <<endl;
					cout<<"------Marca: "<< refrigerante[qposicao].marca<<endl;
					cout<<"------Descricao: "<<refrigerante[qposicao].descricao<<endl;
				    cout<<"------Data de fabricacao: "<<refrigerante[qposicao].datafab<<endl;
					cout<<"------Material: "<<refrigerante[qposicao].material<<endl;
					cout<<"------Durabilidade: "<<refrigerante[qposicao].durabilidade<<endl;
					cout<<"COM O PRECO DE "<<refrigerante[qposicao].preco<<endl;
				}else if (qproduto==4){
						cout<< "O PRODUTO COM MAIOR VALOR NO DEPOSITO FOI O CARRO "<<carro[qposicao].nome <<endl;
					cout<<"------Marca: "<< carro[qposicao].marca<<endl;
					cout<<"------Descricao: "<<carro[qposicao].descricao<<endl;
				    cout<<"------Data de fabricacao: "<<carro[qposicao].datafab<<endl;
					cout<<"------Genero: "<<carro[qposicao].genero<<endl;
					cout<<"------Data de validade: "<<carro[qposicao].dataval<<endl;
					cout<<"COM O PRECO DE "<<carro[qposicao].preco<<endl;
				}else if(qproduto==5){
					cout<< "O PRODUTO COM MAIOR VALOR NO DEPOSITO FOI O LIVRO "<<livro[qposicao].nome <<endl;
					cout<<"------Marca: "<< livro[qposicao].marca<<endl;
					cout<<"------Descricao: "<<livro[qposicao].descricao<<endl;
				    cout<<"------Data de fabricacao: "<<livro[qposicao].datafab<<endl;
					cout<<"------Genero: "<<livro[qposicao].genero<<endl;
					cout<<"------Data de validade: "<<livro[qposicao].dataval<<endl;
					cout<<"COM O PRECO DE "<<livro[qposicao].preco<<endl;
				}else if(qproduto==6){
					cout<< "O PRODUTO COM MAIOR VALOR NO DEPOSITO FOI O CELULAR "<<celular[qposicao].nome <<endl;
					cout<<"------Marca: "<< celular[qposicao].marca<<endl;
					cout<<"------Descricao: "<<celular[qposicao].descricao<<endl;
				    cout<<"------Data de fabricacao: "<<celular[qposicao].datafab<<endl;
					cout<<"------Genero: "<<celular[qposicao].genero<<endl;
					cout<<"------Data de validade: "<<celular[qposicao].dataval<<endl;
					cout<<"COM O PRECO DE "<<celular[qposicao].preco<<endl;
				}
			}
	}
	delete pizza;
	delete carro;
	delete celular;
	delete chocolate;
	delete refrigerante;
	delete livro;

}