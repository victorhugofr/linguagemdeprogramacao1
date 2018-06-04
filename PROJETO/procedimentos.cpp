#include <iostream>
#include "sapo.hpp"
#include "procedimentos.hpp"
#include "pista.hpp"
using namespace std;
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
		cout<< tmp->begin->data.nome <<"   -   "<< tmp->begin->data.distancia<<endl;
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
	int pd = 0;
	 for(int i=0;i<cont2;i++){
    	 cout<<pd<<" - "<<temppista->begin->data.nome<<" "<<temppista->begin->data.distancia<<endl;
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

	int d[cont]={};
	int pulo[cont]={};
	int vezes[cont]={};// auxiliar quem ja acabou a corrida
	int aux=0,rodada=1,pulinho;
	int ganhador[cont];
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
}