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
    string *nomes=new string[cont];
     for(int i = 0; i < cont; i++){
     	getline(arquivosapo, nomes[i]);
     }
    Sapo *sapo = new Sapo[cont];
    for(int i=0;i<cont;i++){
    	sapo[i].setname(nomes[i]);
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
    Pista *pistas=new Pista[cont2];
    int distancia[cont2];
    for(int i = 0; i < cont2; i++){
     	getline(arquivocorrida, leituracorrida[i], ' ');
     	distancia[i]=stoi(leituracorrida[i]);
     	pistas[i].distancia=distancia[i];
     	getline(arquivocorrida, pistas[i].nome);
     }
     arquivocorrida.close();
/*****************************************/


	srand(time(NULL));
	int z;
	while(z!=0){
		z= menu();
		if(z==0){
			break;
		}else if(z==1){
			estatisticasapo(sapo,cont);
		}else if(z==2){
			estatisticapista(pistas,cont2);
		}else if(z==3){
			corrida(sapo,pistas,cont,cont2);
		}else if(z==4){

		}else if(z==5){

		}
	}
	return 0;
}