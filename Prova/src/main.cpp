#include <iostream>
#include <string>
#include "../include/procedimentos.hpp"
#include "../include/acervo.hpp"
#include "../include/produto.hpp"
using namespace std;
// LEMBRAR DE AJEITAR AS CLASSES
int main(){
int i,a;

Cd *cd;
cd = new Cd[100];

Livro *livro;
livro = new Livro[100];

Dvd *dvd;
dvd = new Dvd[100];

Acervo *acervo = new Acervo;
//acervo=new Acervo[300];
//int acc=0;

while(a!=0){
	a=menu();
	if(a==0){
		break;
	}
	else if(a==1){
		i=qualproduto();
			if(i==1){
				lerlivro(livro,acervo);
				acervo->qtdlivro++;
			//	acc++;
			}
			if (i==2){
				lercd(cd,acervo);
				acervo->qtdcd++;
			//	acc++;
			}
			if(i==3){
				lerdvd(dvd,acervo);
				acervo->qtddvd++;
			//	acc++;
			}		
	}
	else if(a==2){
		i=qualproduto();
		if(i==1){
			deletarlivro(livro,acervo);
			acervo->qtdlivro--;
		//	acc--;
		}
		else if(i==2){
			deletarcd(cd,acervo);
			acervo->qtdcd--;
		//	acc--;
		}
		else if(i==3){
			deletardvd(dvd,acervo);
			acervo->qtddvd--;
			//	acc--;
		}
	}
	else if (a==3){
		cout<<"EXISTEM "<<acervo->qtdlivro+acervo->qtdcd+acervo->qtddvd<<" PRODUTOS NO ACERVO"<<endl;
		cout<<"DESEJA SABER DETALHADAMENTE? (1 - SIM, 2 - NAO)"<<endl;
		cin>>i;
		if(i==1){
			cout <<"EXISTEM " <<acervo->qtdlivro<< " LIVROS NO ACERVO"<<endl;
			cout << "EXISTEM "<<acervo->qtdcd<<" CDS NO ACERVO"<<endl;
			cout << "EXISTEM "<<acervo->qtddvd<<" DVDS NO ACERVO"<<endl;
		}
	}
	else if(a==4){
		acervo->verAcervo();
	}
	else if(a==5){
		i=qualproduto();
			if(i==1){
				editarlivro(livro,acervo);
			}else if(i==2){
				editarcd(cd,acervo);
			}else if(i==3){
				editardvd(dvd,acervo);
			}
	}
}
	delete cd;
	delete dvd;
	delete livro;
	delete acervo;

}
