#include <iostream>
#include <string>
#include "procedimentos.hpp"
#include "lista.hpp"
using namespace std;
int main(){
	int i,z,g=0;
	string nome,tipo;
while(menu()!=0){
	switch(menu()){
		case 1:
			cout<<"Escolha um nome para tal lista: "<<endl;
			cin>>nome;
			cout<<"A lista será do tipo:"<<endl;
			cin>>tipo;
			Listas *nome= new Listas[10];
			nome[g].settipo(tipo);
			g++;

		case 2:
			i=quallista(g); //qual lista pergunta ao usuario a lista que deseja adicionar
			cout<<"DIgite o elemento ao qual deseja adicionar"<<endl;
			if(nome[i].tipo == "int"){
				int inteiro;
				cin>> inteiro;
				nome[i].elemento[nome[i].qtdelementos] = inteiro;
				nome[i].qtdelementos ++;
			}else if(nome[i].tipo == "double"){
				double ele;
				cin>> ele;
				nome[i].elemento[nome[i].qtdelementos] = ele;
				nome[i].qtdelementos ++;
			}
		case 3:
			i=quallista(g);
			cout<<"DIgite o elemento ao qual deseja remover"<<endl;
			cin>>ele;
			nome[i].elemento.erase(remove(nome[i].elemento.begin(), nome[i].elemento.end(), nome[i].elemento(ele)));
		case 4:
			i = qualista(g);
			cout<<"Digite o elemento que deseja procurar"<<endl;
			cin>>ele;
			z = nome[i].procuraelemento(ele, i);
			cout<<"O elemento "<<ele<<"esta na posicao "<<z<<"na lista"<<endl;
		case 5:
			i = quallista(g);
			for(int z=0;z<nome[i].qtdelementos;z++){
				cout<<"Elemento: "<<z+1<<" "<< nome[i].elemento[z]<<endl;
			}

	}
}
return 0;

}