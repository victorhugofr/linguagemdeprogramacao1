#include <iostream>
#include <string>
#include "procedimentos.hpp"
#include "lista.hpp"
using namespace std;
int main(){
	int i,z;
	Lista<int>* intLista = new Lista<int>();
	Lista<double>* doubleLista = new Lista<double>();
	string tipo;
	int a;
while(a!=0){
	a=menu();
		if(a==1){
			cout<<"A lista será do tipo:"<<endl;
			cin>>tipo;
		}
		else if(a==2){
			i=quallista(); //qual lista pergunta ao usuario a lista que deseja adicionar
			if(i==1){
				cout<<"Digite o elemento ao qual deseja adicionar"<<endl;
				int inteiro;
				cin>> inteiro;
				intLista->InsereOrdem(inteiro);
			}else if(i==2){
				double ele;
				cin>> ele;
				doubleLista->InsereOrdem(ele);
			}
		}
		else if(a==3){
			i=quallista();
			cout<<"Digite o elemento ao qual deseja remover"<<endl;
		}
		else if(a==4){
			i = quallista();
			cout<<"Digite a posicao que deseja procurar"<<endl;
			int posicao;
			cin>>posicao;
			if(i==1){
				int intm=intLista->get(posicao);
				cout<<"O elemento "<<intm<<"esta na posicao "<<posicao<<"na lista"<<endl;
			}else if(i==2){
				int doublem=doubleLista->get(posicao);
				cout<<"O elemento "<<doublem<<"esta na posicao "<<posicao<<"na lista"<<endl;
			}
		}
		else if(a==5){
			i = quallista();
			if(i==1){
				intLista->mostra();
			}else if(i==2){
				doubleLista->mostra();
			}
		}

	}

return 0;
}
