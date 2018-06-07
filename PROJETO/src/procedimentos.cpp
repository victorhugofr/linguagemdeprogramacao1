#include <iostream>
#include <fstream>
#include "../include/sapo.hpp"
#include "../include/procedimentos.hpp"
#include "../include/pista.hpp"
using namespace std;
/**
 * @file  procedimentos.cpp
 * @brief Procedimentos e metodos para a realização do exercicio
 * @details todas as funções(inserir pista,inserir sapo, ler sapo, ler corrida,menu, estatistica sapo, estatistica pista, corrida)
 * @author Victor Hugo Freire Ramalho
 * @since 08/03/2018
 * @date 12/03/2018
 * @copyright Victor Hugo corporacoes
*/
void inserirpista(listpista *List,Pista data){
    if(List->begin == NULL){
        List->begin = new nodepista;
        List->end = List->begin;
        List->begin->data = data;
        List->begin->prox = NULL;
        cout << "Inseriu o primeiro!"<<endl;
    }
    else{
        List->end->prox = new nodepista;
        List->end = List->end->prox;
        List->end->data = data;
        List->end->prox = NULL;
        cout << "Inseriu!"<<endl;
    }
}
void inserirsapo(listsapo *List,Sapo data){
    if(List->begin == NULL){
        List->begin = new nodesapo;
        List->end = List->begin;
        List->begin->data = data;
        List->begin->prox = NULL;
        cout << "Inseriu o primeiro!"<<endl;
    }
    else{
        List->end->prox = new nodesapo;
        List->end = List->end->prox;
        List->end->data = data;
        List->end->prox = NULL;
        cout << "Inseriu!"<<endl;
    }
}
void lersapo(int& cont, listsapo *sapos){
    ifstream arquivosapo("sapos.txt");
    if(arquivosapo.fail()){
        cout << "O arquivosapo de entrada nao foi encontrado!" << endl;
        return ;
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
        return ;
    }
    /**Leitura e criação dos sapos*/
    string nomea;
    Sapo sapinho;
     for(int i = 0; i < cont; i++){
     	getline(arquivosapo, nomea);
     	sapinho.setname(nomea);
     	inserirsapo(sapos,sapinho);
     }
    arquivosapo.close();
}
void lercorrida(int& cont2, listpista *pista){
	ifstream arquivocorrida("corrida.txt");  //abre o arquivocorrida
    if(arquivocorrida.fail()){
        cout << "O arquivocorrida de entrada nao foi encont2rado!" << endl;
        return ;
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
        return ;
    }
    string leituracorrida;
    string name;
    Pista pistas;
    int *distancia = new int [cont2];
    for(int i = 0; i < cont2; i++){
     	getline(arquivocorrida, leituracorrida, ' ');
     	distancia[i]=stoi(leituracorrida);
     	pistas.setdistancia(distancia[i]);
     	getline(arquivocorrida, name);
     	pistas.setname(name);
     	inserirpista(pista,pistas);
     }
     arquivocorrida.close();
     delete distancia;
}
int menu(){
	int resposta;
	cout<<"MENU:"<<endl;
	cout<<"1 - ESTATISTICAS DOS SAPOS"<<endl;
	cout<<"2 - ESTATISTICAS DAS PISTAS"<<endl;
	cout<<"3 - INICIAR UMA CORRIDA"<<endl;
	cout<<"4 - CRIAR SAPO"<<endl;
	cout<<"5 - CRIAR PISTA"<<endl;
	cout<<"0 - sair"<<endl;
	cin>>resposta;
	return resposta;
}
void estatisticasapo(listsapo *sapos, int cont){
	listsapo *tmp=new listsapo;
	tmp->begin=sapos->begin;
	for(int i = 0 ;i<cont;i++){
		cout<<"NOME:"<<tmp->begin->data.getname()<<endl<<"         "<<"QTD PROVAS:"<<tmp->begin->data.getqtdprovas()<<endl<<"         "<<"QTD VITORIAS:"<<tmp->begin->data.getqtdvitorias()<<endl;
		tmp->begin=tmp->begin->prox;
	}
	delete tmp;
}
void estatisticapista(listpista *pistas, int cont){
	listpista *tmp = new listpista;
	tmp->begin = pistas->begin;
	for(int i = 0 ;i<cont;i++){
		cout<< tmp->begin->data.getname() <<"   -   "<< tmp->begin->data.getdistancia()<<endl;
		tmp->begin=tmp->begin->prox;
	}
	delete tmp;
}
void corrida(listsapo *sapos, listpista *pista, int cont, int cont2){
	listsapo *tempsapo=new listsapo;
	tempsapo->begin=sapos->begin;
	listpista *temppista=new listpista;
	temppista->begin=pista->begin;
	cout<<"SELECIONE A PISTA PARA A CORRIDA,  PISTAS DISPONIVEIS"<<endl;
	 for(int i=0;i<cont2;i++){
    	 cout<<temppista->begin->data.getname()<<" "<<temppista->begin->data.getdistancia()<<endl;
    	 temppista->begin=temppista->begin->prox;
 	}
 	string npista;
 	cout<<"DIGITE O NOME DA PISTA DESEJADA"<<endl;
 	cin>>npista;
	int rpista;
	cout<<"DIGITE A DISTANCIA DA PISTA DESEJADA"<<endl;
	cin>>rpista;
	cout<<"SEJAM BEM VINDOS A CORRIDA "<<endl;
	cout<<"LISTA DE SAPOS PARA A CORRIDA:"<<endl;
	do{
    	 cout<<tempsapo->begin->data.getname()<<endl;
    	 tempsapo->begin=tempsapo->begin->prox;
 	}while(tempsapo->begin->prox!=NULL);
 	tempsapo->begin=sapos->begin;
	cout<<"*******PREPARAR******"<<endl;
	cout<<"******APONTAR*******"<<endl;
	cout<<"********FOGO!*******"<<endl;

	int *d= new int[cont]();
	int *pulo=new int[cont]();
	int *vezes= new int[cont]();// auxiliar quem ja acabou a corrida

	int aux=0,rodada=1,pulinho;	
	int *ganhador=new int[cont];
	ganhador[cont-1]=356;
	listsapo *temp2 = new listsapo;
	temp2->begin=sapos->begin;
	while(ganhador[cont-1] == 356){
		if(ganhador[cont-1]!=356){
			break;
		}
		cout<<"RODADA "<<rodada<<endl;
		/**A distancia do pulo será entre 1m e 3m*/
		for(int i=0;i<cont;i++){
			if(d[i]>=rpista && vezes[i]==0){
				ganhador[aux]=i;
				vezes[i]=1;
				tempsapo->begin=tempsapo->begin->prox;
				//temp2->begin=tempsapo->begin->prox;
				//removersapocorrida(tempsapo,temp2,i);
				aux++;
			}else if(vezes[i]==0 && d[i]<rpista){
				pulinho=rand()%3+1;
				d[i]+=pulinho;
				tempsapo->begin->data.setdistancia(d[i]);
				pulo[i]++;
				tempsapo->begin->data.setpulos(pulo[i]); 
				cout<<"O SAPO "<<tempsapo->begin->data.getname()<<" PULOU! NUMA DISTANCIA DE "<<pulinho<< "   DISTANCIA PERCORRIDA ATE O MOMENTO: "<<d[i]<<endl;
				tempsapo->begin=tempsapo->begin->prox;
			}else if(vezes[i]==1 && d[i]>=rpista){
				tempsapo->begin=tempsapo->begin->prox;
			}
		}
		cout<<"*******************************************"<<endl;
		tempsapo->begin=temp2->begin;
		rodada++;
	}
	cout<<"CORRIDA FINALIZADA"<<endl;
	cout<<"***********************************"<<endl;
	cout<<"RANK DA CORRIDA:"<<endl;
	int test=0;
	int z = 0;
	tempsapo->begin=sapos->begin;
	while(z!=cont){
		while(test!=ganhador[z]){
			tempsapo->begin=tempsapo->begin->prox;
			test++;
		}
		if(z+1==1){
			tempsapo->begin->data.setqtdvitorias(1);
		}
		cout<<z+1<<" - "<<tempsapo->begin->data.getname()<<endl;
		test=0;
		z++;
		tempsapo->begin=sapos->begin;
	}
	delete temp2;
	delete tempsapo;
	delete temppista;
	delete d;
	delete pulo;
	delete vezes;
	delete ganhador;
}