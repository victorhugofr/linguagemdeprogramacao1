#include <iostream>
#include <string>
#include <ctime> 
#include <cstdlib>
#include <fstream>
#include "../include/sapo.hpp"
#include "../include/procedimentos.hpp"
#include "../include/pista.hpp"
#include "../include/nodesapo.hpp"
#include "../include/nodepista.hpp"
#include "../include/listpista.hpp"
#include "../include/listsapo.hpp"
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
int main(){
	int cont = 0;
    listsapo *sapos = new listsapo;
    lersapo(cont,sapos);
    int cont2 = 0;
    listpista *pista = new listpista;
    lercorrida(cont2,pista);
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
			cout<<"Digite o nome da nova corrida que queira adicionar"<<endl;
			string novonome;
			cin>>novonome;
			cout<<"Digite a distancia da corrida que queira adicionar"<<endl;
			string novadistancia;
			cin>>novadistancia;
            int novadistancia1=stoi(novadistancia);
            Pista novapista;
            novapista.setdistancia(novadistancia1);
            novapista.setname(novonome);
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