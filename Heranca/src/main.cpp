#include <iostream>
#include <string>
#include "../include/pizza.hpp"
#include "../include/celular.hpp"
#include "../include/carro.hpp"
#include "../include/refrigerante.hpp"
#include "../include/livro.hpp"
#include "../include/chocolate.hpp"
#include "../include/procedimentos.hpp"
#include "../include/deposito.hpp"
using namespace std;
// LEMBRAR DE AJEITAR AS CLASSES
int main(){
string nome1,marca1,descricao1,fabricacao1;
string mpred, datav,genero1;
int i;

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

Deposito *deposito;
deposito= new Deposito[600];
int dec=0;
while(a!=0){
	a=menu();
	if(a==0){
		break;
	}
		else if(a==1){
			i=qualproduto();
			if(i==1 || i==2 || i==3){
				if(i==1){
					lerpizza(pizza,deposito,pic,dec);
					pic++;
					dec++;
				}
				if (i==2){
					lerrefrigerante(refrigerante,deposito,rec,dec);
					rec++;
					dec++;
				}
				if(i==3){
					lerchocolate(chocolate,deposito,chc,dec);
					chc++;
					dec++;
				}
			} else if(i==4 || i==5 || i==6){
				if(i==4){
					lercarro(carro,deposito,cac,dec);
					cac++;
					dec++;
				}
				if (i==5){
					lerlivro(livro,deposito,lic,dec);
					lic++;
					dec++;
				}
				if(i==6){
					lercelular(celular,deposito,cec,dec);
					cec++;
					dec++;
				}
			}
		}
		else if(a==2){
			i=qualproduto();
				if(i==1){
					deletarpizza(pizza,pic);
					pic--;
					dec--;
				}
				else if(i==2){
					deletarrefrigerante(refrigerante,rec);
					rec--;
					dec--;
				}
				else if(i==3){
					deletarchocolate(chocolate,chc);
					chc--;
					dec--;
				}
				else if(i==4){ // CARRO LIVRO CELULAR
					deletarcarro(carro,cac);
					cac--;
					dec--;
				}
				else if(i==5){// CARRO LIVRO CELULAR
					deletarlivro(livro,lic);
					lic--;
					dec--;
				}
				else if (i==6){
					deletarcelular(celular,cec);
					cec--;
					dec--;
				}
			}
			else if (a==3){
				cout<<"EXISTEM "<<dec<<" PRODUTOS NO DEPOSITO"<<endl;
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
				if((dec) == 0){
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
						qproduto=3;
						qposicao=n;
					}
				}
				for(int n=0;n<chc;n++){
					if(chocolate[n].preco>maiorpreco){
						maiorpreco=chocolate[n].preco;
						qproduto=2;
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
					cout<<"------Data de validade: "<<pizza[qposicao].dataval<<endl;
					cout<<"------genero: "<<pizza[qposicao].genero<<endl;
					cout<<"COM O PRECO DE "<<maiorpreco<<endl;
				}else if (qproduto==2){
					cout<< "O PRODUTO COM MAIOR VALOR NO DEPOSITO FOI O CHOCOLATE "<<chocolate[qposicao].nome <<endl;
					cout<<"------Marca: "<< chocolate[qposicao].marca<<endl;
					cout<<"------Descricao: "<<chocolate[qposicao].descricao<<endl;
				    cout<<"------Data de fabricacao: "<<chocolate[qposicao].datafab<<endl;
					cout<<"------Data de validade: "<<chocolate[qposicao].dataval<<endl;
					cout<<"------genero: "<<chocolate[qposicao].genero<<endl;
					cout<<"COM O PRECO DE "<<chocolate[qposicao].preco<<endl;
				}else if(qproduto==3){
					cout<< "O PRODUTO COM MAIOR VALOR NO DEPOSITO FOI O REFRIGERANTE "<<refrigerante[qposicao].nome <<endl;
					cout<<"------Marca: "<< refrigerante[qposicao].marca<<endl;
					cout<<"------Descricao: "<<refrigerante[qposicao].descricao<<endl;
				    cout<<"------Data de fabricacao: "<<refrigerante[qposicao].datafab<<endl;
					cout<<"------Data de validade: "<<refrigerante[qposicao].dataval<<endl;
					cout<<"------genero: "<<refrigerante[qposicao].genero<<endl;
					cout<<"COM O PRECO DE "<<refrigerante[qposicao].preco<<endl;
				}else if (qproduto==4){
						cout<< "O PRODUTO COM MAIOR VALOR NO DEPOSITO FOI O CARRO "<<carro[qposicao].nome <<endl;
					cout<<"------Marca: "<< carro[qposicao].marca<<endl;
					cout<<"------Descricao: "<<carro[qposicao].descricao<<endl;
				    cout<<"------Data de fabricacao: "<<carro[qposicao].datafab<<endl;
					cout<<"------material: "<<carro[qposicao].material<<endl;
					cout<<"------Durabilidade: "<<carro[qposicao].durabilidade<<endl;
					cout<<"COM O PRECO DE "<<carro[qposicao].preco<<endl;
				}else if(qproduto==5){
					cout<< "O PRODUTO COM MAIOR VALOR NO DEPOSITO FOI O LIVRO "<<livro[qposicao].nome <<endl;
					cout<<"------Marca: "<< livro[qposicao].marca<<endl;
					cout<<"------Descricao: "<<livro[qposicao].descricao<<endl;
				    cout<<"------Data de fabricacao: "<<livro[qposicao].datafab<<endl;
					cout<<"------material: "<<livro[qposicao].material<<endl;
					cout<<"------Durabilidade: "<<livro[qposicao].durabilidade<<endl;
					cout<<"COM O PRECO DE "<<livro[qposicao].preco<<endl;
				}else if(qproduto==6){
					cout<< "O PRODUTO COM MAIOR VALOR NO DEPOSITO FOI O CELULAR "<<celular[qposicao].nome <<endl;
					cout<<"------Marca: "<< celular[qposicao].marca<<endl;
					cout<<"------Descricao: "<<celular[qposicao].descricao<<endl;
				    cout<<"------Data de fabricacao: "<<celular[qposicao].datafab<<endl;
					cout<<"------material: "<<celular[qposicao].material<<endl;
					cout<<"------Durabilidade: "<<celular[qposicao].durabilidade<<endl;
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
	delete deposito;

}