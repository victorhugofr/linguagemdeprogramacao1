#include "../include/procedimentos.hpp"
#include <iostream>
#include <string>
using namespace std;
int qualproduto(){
	int n;
	cout<< "QUAL PRODUTO? "<<endl;
	cout<< "1 - LIVRO"<<endl;
	cout<< "2 - CD"<<endl;
	cout<< "3 - DVD"<<endl;
	cin >> n;
	return n; 
}
int menu(){
	int n;
	cout<< "MENU: "<<endl;
	cout<< "1 - ADICIONAR MIDIA "<<endl;
	cout<< "2 - REMOVER MIDIA "<<endl;
	cout<< "3 - QUANTIDADE DE PRODUTOS NO ACERVO "<<endl;
	cout<< "4 - VER ACERVO DETALHADAMENTE "<<endl;
	cout<<"5 - EDITAR ITEM "<<endl;
	cout <<"0 - SAIR"<<endl;
	cin >>n;
	return n;
}
void lercd(Cd *cd, Acervo *acervo){
string titulo1,lancamento1;
string gravadora1;
string compositor1;
string quantidadedefaixas1;
					cd[acervo->qtdcd].tipo="CD";
					cout<<"Informe o titulo "<<endl;
					cin.ignore();
					getline(cin, titulo1);
					cd[acervo->qtdcd].titulo=titulo1;
					cout<<"Informe o compositor "<<endl;
					cin>>compositor1;
					cd[acervo->qtdcd].compositor=compositor1;
					cout<<"Informe a quantidade defaixas "<<endl;
					cin.ignore();
					getline(cin, quantidadedefaixas1);
					cd[acervo->qtdcd].quantidadedefaixas=quantidadedefaixas1;
					cout<<"Informe a data de lancamento "<<endl;
					cin>>lancamento1;
					cd[acervo->qtdcd].anodelancamento=lancamento1;
					cout<<"Informe a gravadora "<<endl;
					cin>>gravadora1;
					cd[acervo->qtdcd].gravadora=gravadora1;
					acervo->inserircd(cd);

				//    acervo[acc].titulo=cd[cdc].titulo;
				//	acervo[acc].compositor=cd[cdc].compositor;
				//	acervo[acc].quantidadedefaixas=cd[cdc].quantidadedefaixas;
				//	acervo[acc].anodelancamento=cd[cdc].anodelancamento;
				//	acervo[acc].gravadora=cd[cdc].gravadora;
				//	acc++;
}
void lerlivro(Livro *livro, Acervo *acervo){//void lerlivro(Livro *livro, Acervo *acervo,int lic, int acc)
string titulo1,editora1,ISBN1,lancamento1;
string autor1;
					livro[acervo->qtdlivro].tipo="Livro";
					cout<<"Informe o titulo "<<endl;
					cin.ignore();
					getline(cin, titulo1);
					livro[acervo->qtdlivro].titulo=titulo1;
					cout<<"Informe o autor "<<endl;
					cin>>autor1;
					livro[acervo->qtdlivro].autor=autor1;
					cout<<"Informe a editora "<<endl;
					cin>>editora1;
					livro[acervo->qtdlivro].editora=editora1;
					cout<<"Informe a ISBN "<<endl;
					cin.ignore();
					getline(cin, ISBN1);
					livro[acervo->qtdlivro].ISBN=ISBN1;
					cout<<"Informe a data de lancamento "<<endl;
					cin>>lancamento1;
					livro[acervo->qtdlivro].anodelancamento=lancamento1;
					acervo->inserirlivro(livro);
				//	acervo[acc].titulo=livro[lic].titulo;
				//	acervo[acc].autor=livro[lic].autor;
				//	acervo[acc].editora=livro[lic].editora;
				//	acervo[acc].ISBN=livro[lic].ISBN;
				//	acervo[acc].anodelancamento=livro[lic].anodelancamento;
}
void lerdvd(Dvd *dvd, Acervo *acervo){
string titulo1,duracao1,classificacao1,lancamento1,diretor1;
					dvd[acervo->qtddvd].tipo="DVD";
					cout<<"Informe o titulo "<<endl;
					cin>>titulo1;
					dvd[acervo->qtddvd].titulo=titulo1;
					cout<<"Informe o diretor "<<endl;
					cin>>diretor1;
					dvd[acervo->qtddvd].diretor=diretor1;
					cout<<"Informe a duracao "<<endl;
					cin>>duracao1;
					dvd[acervo->qtddvd].duracao=duracao1;
					cout<<"Informe a classificacao "<<endl;
					cin.ignore();
					getline(cin, classificacao1);
					dvd[acervo->qtddvd].classificacao=classificacao1;
					cout<<"Informe a data de lancamento "<<endl;
					cin>>lancamento1;
					dvd[acervo->qtddvd].anodelancamento=lancamento1;
					acervo->inserirdvd(dvd);
				//	acervo[acc].titulo=dvd[dvc].titulo;
				//	acervo[acc].diretor=dvd[dvc].diretor;
				//	acervo[acc].duracao=dvd[dvc].duracao;
				//	acervo[acc].classificacao=dvd[dvc].classificacao;
				//	acervo[acc].anodelancamento=dvd[dvc].anodelancamento;
}
void deletarcd(Cd *cd,  Acervo *acervo){
					string tipo="CD";
					cout << "QUAIS DESTAS cdS DESEJA REMOVER DO ESTOQUE? INFORME O titulo E O COMPOSITOR" << endl;
					for(int z=0;z<acervo->qtdcd;z++){
						cout << cd[z].titulo << "     -    COMPOSITOR : " << cd[z].compositor<<endl;
					}
					string titulo1;
					string compositor1;
					cin>> titulo1;
					cin>> compositor1;
					int j,pos;
					for(j=0;j<acervo->qtdcd;j++){
						if(cd[j].titulo == titulo1 && cd[j].compositor==compositor1){
							pos=j;
							break;
						}
					}
					for(int z=pos;z<acervo->qtdcd;z++){
							cd[z].titulo = cd[z+1].titulo;
							cd[z].compositor= cd[z+1].compositor;
							cd[z].anodelancamento=cd[z+1].anodelancamento;
							cd[z].quantidadedefaixas=cd[z+1].quantidadedefaixas;
							cd[z].gravadora=cd[z+1].gravadora;
					}
					int aux;
					aux=acervo->qtdcd;
					aux--;
					cout  <<" cd REMOVIDO, LISTA DE cdS: "<<endl;
					for(int z=0;z<aux;z++){
						cout << cd[z].titulo << "     -    COMPOSITOR: " << cd[z].compositor<<endl;
					}
					acervo->remover(titulo1,tipo,cd[pos].anodelancamento);
}
void deletardvd(Dvd *dvd, Acervo *acervo){
	string tipo="DVD";
					cout << "QUAIS DESTES dvdS DESEJA REMOVER DO ESTOQUE? INFORME O TITULO E O DIRETOR" << endl;
					for(int z=0;z<acervo->qtddvd;z++){
						cout << dvd[z].titulo << "     -    DIRETOR: " << dvd[z].diretor<<endl;
					}
					string titulo1;
					string diretor1;
					cin>> titulo1;
					cin>> diretor1;
					int j,pos;
					for(j=0;j<acervo->qtddvd;j++){
						if(dvd[j].titulo == titulo1 && dvd[j].diretor==diretor1){
							pos=j;
							break;
						}
					}
					for(int z=pos;z<acervo->qtddvd;z++){
							dvd[z].titulo = dvd[z+1].titulo;
							dvd[z].diretor=dvd[z+1].diretor;
							dvd[z].duracao=dvd[z+1].duracao;
							dvd[z].anodelancamento=dvd[z+1].anodelancamento;
							dvd[z].classificacao=dvd[z+1].classificacao;
					}
					int aux;
					aux=acervo->qtddvd;
					aux--;
					cout  <<" dvd REMOVIDO, LISTA DE dvdS: "<<endl;
					for(int z=0;z<aux;z++){
						cout << dvd[z].titulo << "     -    DATA FAB: " << dvd[z].diretor<<endl;
					}
					acervo->remover(titulo1,tipo,dvd[pos].anodelancamento);
}
void deletarlivro(Livro *livro, Acervo *acervo){
	string tipo="Livro";
					cout << "QUAIS DESTES LIVROS DESEJA REMOVER DO ESTOQUE? INFORME O TITULO E O AUTOR" << endl;
					for(int z=0;z<acervo->qtdlivro;z++){
						cout << livro[z].titulo << "     -    DATA FAB: " << livro[z].autor<<endl;
					}
					string titulo1;
					string autor1;
					cin>> titulo1;
					cin>> autor1;
					int j,pos;
					for(j=0;j<acervo->qtdlivro;j++){
						if(livro[j].titulo == titulo1 && livro[j].autor==autor1){
							pos=j;
							break;
						}
					}
					for(int z=pos;z<acervo->qtdlivro;z++){
							livro[z].titulo = livro[z+1].titulo;
							livro[z].editora= livro[z+1].editora;
							livro[z].ISBN=livro[z+1].ISBN;
							livro[z].anodelancamento=livro[z+1].anodelancamento;
							livro[z].autor=livro[z+1].autor;
					}
					int aux;
					aux=acervo->qtdlivro;
					aux--;
					cout  <<" livro REMOVIDO, LISTA DE livroS: "<<endl;
					for(int z=0;z<aux;z++){
						cout << livro[z].titulo << "     -    DATA FAB: " << livro[z].autor<<endl;
					}
					acervo->remover(titulo1,tipo,livro[pos].anodelancamento);
}
void editarlivro(Livro *livro,Acervo *acervo){
	string editora1,ISBN1,lancamento1,titulo1;
	string tipo="Livro";
	cout << "QUAIS DESTES LIVROS DESEJA EDITAR? INFORME O TITULO E O AUTOR" << endl;
	for(int z=0;z<acervo->qtdlivro;z++){
		cout << livro[z].titulo << "     -    DATA FAB: " << livro[z].autor<<endl;
	}
					string titulo2;
					string autor1,resp;
					cin>> titulo2;
					cin>> autor1;
					int j,pos;
					for(j=0;j<acervo->qtdlivro;j++){
						if(livro[j].titulo == titulo2 && livro[j].autor==autor1){
							pos=j;
							break;
						}
					}
					cout<<"O LIVRO ESCOLHIDO TEM AS SEGUINTES CARACTERISTICAS:"<<endl;
					cout<<"****LIVRO "<<pos+1<<": ****"<<endl;
					cout <<"TITULO: " <<livro[pos].titulo <<endl;
					cout<<"AUTOR: "<<livro[pos].autor<<endl;
					cout<<"EDIITORA: "<<livro[pos].editora<<endl;
					cout<<"ANO DE LANCAMENTO: "<<livro[pos].anodelancamento<<endl;
					cout<<"ISBN: "<<livro[pos].ISBN<<endl;
					cout<<"DESEJA CONFIRMAR A EDICAO DESTE LIVRO? (y/n)"<<endl;
					cin>>resp;
			if(resp=="y"){
				cout<<"Informe o titulo "<<endl;
				cin.ignore();
				getline(cin, titulo1);
				livro[pos].titulo=titulo1;
				cout<<"Informe o autor "<<endl;
				cin>>autor1;
				livro[pos].autor=autor1;
				cout<<"Informe a editora "<<endl;
				cin>>editora1;
				livro[pos].editora=editora1;
				cout<<"Informe a ISBN "<<endl;
				cin.ignore();
				getline(cin, ISBN1);
				livro[pos].ISBN=ISBN1;
				cout<<"Informe a data de lancamento "<<endl;
				cin>>lancamento1;
				livro[pos].anodelancamento=lancamento1;

				cout<< "****"<<tipo<<"EDITADO**** SEGUE AS NOVAS CARACTERISTICAS:"<<endl;
				cout<<"****"<<tipo<<pos+1<<": ****"<<endl;
				cout <<"TITULO: " <<livro[pos].titulo <<endl;
				cout<<"AUTOR: "<<livro[pos].autor<<endl;
				cout<<"EDIITORA: "<<livro[pos].editora<<endl;
				cout<<"ANO DE LANCAMENTO: "<<livro[pos].anodelancamento<<endl;
				cout<<"ISBN: "<<livro[pos].ISBN<<endl;
				acervo->editar(titulo2,tipo,livro[pos].anodelancamento,titulo1,lancamento1);
			}
}
void editarcd(Cd *cd,Acervo *acervo){
	string resp,titulo1;
	string tipo="Livro";
		cout << "QUAIS DESTAS cdS DESEJA EDITAR? INFORME O titulo E O COMPOSITOR" << endl;
		for(int z=0;z<acervo->qtdcd;z++){
			cout << cd[z].titulo << "     -    COMPOSITOR : " << cd[z].compositor<<endl;
		}
	string titulo2,quantidadedefaixas1,lancamento1,gravadora1;
	string compositor1;
	cin>> titulo2;
	cin>> compositor1;
	int j,pos;
	for(j=0;j<acervo->qtdcd;j++){
		if(cd[j].titulo == titulo2 && cd[j].compositor==compositor1){
			pos=j;
			break;
		}
	}
	cout<<"O CD ESCOLHIDO TEM AS SEGUINTES CARACTERISTICAS:"<<endl;
	cout<<"****CD "<<pos+1<<": ****"<<endl;
	cout <<"titulo: " <<cd[pos].titulo <<endl;
	cout<<"COMPOSITOR: "<<cd[pos].compositor<<endl;
	cout<<"QUANTIDADE DE FAIXAS: "<<cd[pos].quantidadedefaixas<<endl;
	cout<<"ANO DE LANCAMENTO: "<<cd[pos].anodelancamento<<endl;
	cout<<"GRAVADORA: "<<cd[pos].gravadora<<endl;
	cout<<"DESEJA CONFIRMAR A EDICAO DESTE CD? (y/n)"<<endl;
	cin>>resp;

	if(resp=="y"){
		cout<<"Informe o titulo "<<endl;
		cin.ignore();
		getline(cin, titulo1);
		cd[pos].titulo=titulo1;
		cout<<"Informe o compositor "<<endl;
		cin>>compositor1;
		cd[pos].compositor=compositor1;
		cout<<"Informe a quantidade defaixas "<<endl;
		cin.ignore();
		getline(cin, quantidadedefaixas1);
		cd[pos].quantidadedefaixas=quantidadedefaixas1;
		cout<<"Informe a data de lancamento "<<endl;
		cin>>lancamento1;
		cd[pos].anodelancamento=lancamento1;
		cout<<"Informe a gravadora "<<endl;
		cin>>gravadora1;
		cd[pos].gravadora=gravadora1;
		
		cout<< "****CD EDITADO**** SEGUE AS NOVAS CARACTERISTICAS:"<<endl;
		cout<<"****CD "<<pos+1<<": ****"<<endl;
		cout <<"TITULO: " <<cd[pos].titulo <<endl;
		cout<<"compositor: "<<cd[pos].compositor<<endl;
		cout<<"quantidadedefaixas: "<<cd[pos].quantidadedefaixas<<endl;
		cout<<"ANO DE LANCAMENTO: "<<cd[pos].anodelancamento<<endl;
		cout<<"gravadora: "<<cd[pos].gravadora<<endl;
		acervo->editar(titulo1,tipo,cd[pos].anodelancamento,titulo2,lancamento1);
	}
}
void editardvd(Dvd *dvd, Acervo *acervo){
	string duracao1,titulo1,classificacao1,lancamento1;
	string tipo="DVD";
	cout << "QUAIS DESTES dvdS DESEJA EDITAR? INFORME O TITULO E O DIRETOR" << endl;
	for(int z=0;z<acervo->qtddvd;z++){
		cout << dvd[z].titulo << "     -    DIRETOR: " << dvd[z].diretor<<endl;
	}
	string titulo2;
	string diretor1;
	cin>> titulo2;
	cin>> diretor1;
	int j,pos;
	for(j=0;j<acervo->qtddvd;j++){
		if(dvd[j].titulo == titulo2 && dvd[j].diretor==diretor1){
			pos=j;
			break;
		}
	}
	cout<<"O DVD ESCOLHIDO TEM AS SEGUINTES CARACTERISTICAS:"<<endl;
	cout<<"****DVD "<<pos+1<<": ****"<<endl;
	cout <<"TITULO: " <<dvd[pos].titulo <<endl;
	cout<<"DIRETOR: "<<dvd[pos].diretor<<endl;
	cout<<"DURACAO: "<<dvd[pos].duracao<<endl;
	cout<<"ANO DE LANCAMENTO: "<<dvd[pos].anodelancamento<<endl;
	cout<<"CLASSIFICACAO: "<<dvd[pos].classificacao<<endl;
	cout<<"DESEJA CONFIRMAR A EDICAO DESTE DVD? (y/n)"<<endl;
	string resp;
	cin>>resp;
	if(resp=="y"){
		cout<<"Informe o titulo "<<endl;
		string titulo1;
		cin>>titulo1;
		dvd[pos].titulo=titulo1;
		cout<<"Informe o diretor "<<endl;
		string diretor1;
		cin>>diretor1;
		dvd[pos].diretor=diretor1;
		cout<<"Informe a duracao "<<endl;
		string duracao1;
		cin>>duracao1;
		dvd[pos].duracao=duracao1;
		cout<<"Informe a classificacao "<<endl;
		string classificacao1;
		cin.ignore();
		getline(cin, classificacao1);
		dvd[pos].classificacao=classificacao1;
		cout<<"Informe a data de lancamento "<<endl;
		string lancamento1;
		cin>>lancamento1;
		dvd[pos].anodelancamento=lancamento1;
		cout<< "****DVD EDITADO**** SEGUE AS NOVAS CARACTERISTICAS:"<<endl;
		cout<<"****DVD "<<pos+1<<": ****"<<endl;
		cout <<"TITULO: " <<dvd[pos].titulo <<endl;
		cout<<"DIRETOR: "<<dvd[pos].diretor<<endl;
		cout<<"DURACAO: "<<dvd[pos].duracao<<endl;
		cout<<"ANO DE LANCAMENTO: "<<dvd[pos].anodelancamento<<endl;
		cout<<"CLASSIFICACAO: "<<dvd[pos].classificacao<<endl;
		acervo->editar(titulo1,tipo,dvd[pos].anodelancamento,titulo2,lancamento1);
	}
}