#include <iostream>
#include <string>
#include <ctime> 
#include <cstdlib>
#include <fstream>
#include "sapo.hpp"
#include "procedimentos.hpp"
#include "pista.hpp"
using namespace std;
/**
 * @file  main.cpp
 * @brief Exercicio da corrida de sapos
 * @details Uma corrida de sapos que o a distancia percorrida dos pulos do sapo são aleatórias, ganha quem ultrapassar a chegada primeiro.
 * @author Victor Hugo Freire Ramalho
 * @since 08/03/2018
 * @date 12/03/2018
 * @copyright Victor Hugo corporacoes
*/

//INSERT BACK
void inserirpista(listpista *List,Pista data){
    //INSERT FIRST ELEMENT
    if(List->begin == NULL){
        List->begin = new nodepista;
        List->end = List->begin;
        List->begin->data = data;
        List->begin->prox = NULL;
        cout << "Inseriu o primeiro!"<<endl;
    }
    else{
        //INSERT REMAINING ELEMENTS
        List->end->prox = new nodepista;
        List->end = List->end->prox;
        List->end->data = data;
        List->end->prox = NULL;
        cout << "Inseriu!"<<endl;
    }
}

//INSERT BACK
void inserirsapo(listsapo *List,Sapo data){
    //INSERT FIRST ELEMENT
    if(List->begin == NULL){
        List->begin = new nodesapo;
        List->end = List->begin;
        List->begin->data = data;
        List->begin->prox = NULL;
        cout << "Inseriu o primeiro!"<<endl;
    }
    else{
        //INSERT REMAINING ELEMENTS
        List->end->prox = new nodesapo;
        List->end = List->end->prox;
        List->end->data = data;
        List->end->prox = NULL;
        cout << "Inseriu!"<<endl;
    }
}
int main(){
	int cont = 0;
    ifstream arquivosapo("sapos.txt");  //abre o arquivosapo
    if(arquivosapo.fail()){
        cout << "O arquivosapo de entrada nao foi encontrado!" << endl;
        return 1;
    }
    string str = "";
    while(!arquivosapo.eof()) { // faz a contagem de linhas do arquivosapo
        getline(arquivosapo, str);
        if(str != "")
            cont++;
    }
    arquivosapo.clear(); // reseta objeto para limpar memoria
    arquivosapo.seekg(arquivosapo.beg); // setando para o começo do arquivosapo
    if(cont <= 0) {
        cout << "O arquivosapo foi encontrado, mas está vazio. Adicione instrucoes, lembre-se de salvar e tente novamente." << endl;
        return 1;
    }
    /**Leitura e criação dos sapos*/
    string nomea;
    Sapo sapinho;
    listsapo *sapos = new listsapo;
     for(int i = 0; i < cont; i++){
     	getline(arquivosapo, nomea);
     	sapinho.setname(nomea);
     	inserirsapo(sapos,sapinho);
     }
    arquivosapo.close();
/****************************************/
    int cont2 = 0;
    ifstream arquivocorrida("corrida.txt");  //abre o arquivocorrida
    if(arquivocorrida.fail()){
        cout << "O arquivocorrida de entrada nao foi encont2rado!" << endl;
        return 1;
    }
    string str2 = "";
    while(!arquivocorrida.eof()) { // faz a cont2agem de linhas do arquivocorrida
        getline(arquivocorrida, str2);
        if(str2 != "")
            cont2++;
    }
    arquivocorrida.clear(); // reseta objeto para limpar memoria
    arquivocorrida.seekg(arquivocorrida.beg); // setando para o começo do arquivocorrida
    if(cont2 <= 0) {
        cout << "O arquivocorrida foi encontrado, mas está vazio. Adicione instrucoes, lembre-se de salvar e tente novamente." << endl;
        return 1;
    }
    string *leituracorrida=new string[cont2];
    Pista pistas;
    listpista *pista = new listpista;
    int distancia[cont2];
    for(int i = 0; i < cont2; i++){
     	getline(arquivocorrida, leituracorrida[i], ' ');
     	distancia[i]=stoi(leituracorrida[i]);
     	pistas.distancia=distancia[i];
     	getline(arquivocorrida, pistas.nome);
     	inserirpista(pista,pistas);
     }
     arquivocorrida.close();
     delete leituracorrida;
/*****************************************/
	srand(time(NULL));
	int z;
	while(z!=0){
		z= menu();
		if(z==0){
			break;
		}else if(z==1){
            estatisticasapo(sapos,cont);
		}else if(z==2){
			estatisticapista(pista,cont2);
		}else if(z==3){
			corrida(sapos,pista,cont,cont2);
		}else if(z==4){
            cout<<"Digite o nome do sapo que deseja adicionar"<<endl;
            string novosapo;
            cin>>novosapo;
            Sapo novosapo1;
            novosapo1.setname(novosapo);
            inserirsapo(sapos,novosapo1);
            ofstream arquivosapo2("sapos.txt",ios::ate | ios::app);
            if(arquivosapo2.is_open()){
                arquivosapo2 <<"\n"<<novosapo; 
                arquivosapo2.close();
            }else{
                cout<<"Nao foi possivel abrir o arquivo"<<endl;
            }
            cont++;
		}else if(z==5){
		//	auxnew++;
		//	delete pistas;
			cout<<"Digite o nome da nova corrida que queira adicionar"<<endl;
			string novonome;
			cin>>novonome;
			cout<<"Digite a distancia da corrida que queira adicionar"<<endl;
			string novadistancia;
			cin>>novadistancia;
            int novadistancia1=stoi(novadistancia);
            Pista novapista;
            novapista.distancia=novadistancia1;
            novapista.nome=novonome;
			ofstream arquivocorrida2("corrida.txt",ios::ate | ios::app);
			if(arquivocorrida2.is_open()){
				arquivocorrida2 <<"\n"<<novadistancia<<" "<<novonome; 
				arquivocorrida2.close();
			}else{
				cout<<"Nao foi possivel abrir o arquivo"<<endl;
			}
            inserirpista(pista,novapista);
            cont2++;
		}
	}
	return 0;
}