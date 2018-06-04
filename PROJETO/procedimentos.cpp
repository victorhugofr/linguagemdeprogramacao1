#include <iostream>
#include "sapo.hpp"
#include "procedimentos.hpp"
#include "pista.hpp"
using namespace std;
void removersapocorrida(listsapo *List, listsapo *temp2,int i){
	int test=0;
    if(i-1>=0){
    	while(test!=i-1){
			List->begin=List->begin->prox; 
			test++;
		}
        listsapo *tmp = new listsapo;
        tmp->begin = List->begin;
        tmp->begin->prox=List->begin->prox->prox;
        delete List->begin->prox;
        List->begin = tmp->begin;
        List->begin->prox=tmp->begin->prox;
        cout << "Removeu!"<<endl;
        List->begin = temp2->begin;
    }
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
void estatisticasapo(Sapo *sapos, int cont){
	for(int i = 0 ;i<cont;i++){
		cout<<sapos[i]<<endl;
	}
}
void estatisticapista(Pista *pistas, int cont){
	for(int i = 0 ;i<cont;i++){
		cout<<pistas[i]<<endl;
	}
}
void corrida(listsapo *sapos, listpista *pista, int cont, int cont2){
	listsapo *tempsapo=new listsapo;
	tempsapo->begin=sapos->begin;
	listpista *temppista=pista;
	cout<<"SELECIONE A PISTA PARA A CORRIDA,  PISTAS DISPONIVEIS"<<endl;
	int pd = 0;
	 while(temppista->begin->prox!=NULL){
    	 cout<<pd<<" - "<<temppista->begin->data.nome<<" "<<temppista->begin->data.distancia<<endl;
    	 temppista->begin=temppista->begin->prox;
 	}
 	string npista;
 	cin>>npista;
	int rpista;
	cin>>rpista;
	cout<<"SEJAM BEM VINDOS A CORRIDA "<<endl;
	cout<<"LISTA DE SAPOS PARA A CORRIDA:"<<endl;
	while(tempsapo->begin->prox!=NULL){
    	 cout<<tempsapo->begin->data.getname()<<endl;
    	 tempsapo->begin=tempsapo->begin->prox;
 	}
 	tempsapo->begin=sapos->begin;
	cout<<"*******PREPARAR******"<<endl;
	cout<<"******APONTAR*******"<<endl;
	cout<<"********FOGO!*******"<<endl;

	int d[cont]={};
	int pulo[cont]={};
	int vezes[cont]={};// auxiliar quem ja acabou a corrida
	int aux=0,rodada=1;
	int ganhador[cont];
	ganhador[cont-1]=356;
	int pulinho;
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
				//temp2->begin=tempsapo->begin->prox;
				removersapocorrida(tempsapo,temp2,i);
				aux++;
			}else if(vezes[i]==0 && d[i]<rpista){
				pulinho=rand()%3+1;
				d[i]+=pulinho;
				tempsapo->begin->data.setdistancia(d[i]);
				pulo[i]++;
				tempsapo->begin->data.setpulos(pulo[i]); 
				cout<<"O SAPO "<<tempsapo->begin->data.getname()<<" PULOU! NUMA DISTANCIA DE "<<pulinho<< "   DISTANCIA PERCORRIDA ATE O MOMENTO: "<<d[i]<<endl;
				tempsapo->begin=tempsapo->begin->prox;
				if(i==cont-1){
					cout<<"*******************************************"<<endl;
				}
			}

		}
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
		z++;
		tempsapo->begin=sapos->begin;
	}
	delete temp2;
	delete tempsapo;
}