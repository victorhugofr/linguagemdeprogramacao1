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
void corrida(Sapo *sapos, Pista *pistas, int cont, int cont2){
	cout<<"SELECIONE A PISTA PARA A CORRIDA,  PISTAS DISPONIVEIS"<<endl;
	for(int i=0;i<cont2;i++){
		cout<<i<<" - : "<<pistas[i].nome<<endl;
		cout<<"     DISTANCIA: "<<pistas[i].distancia<<endl;
	}
	int rpista;
	cin>>rpista;
	cout<<"SEJAM BEM VINDOS A CORRIDA "<<pistas[rpista].nome<<endl;
	cout<<"A PISTA TEM : "<<pistas[rpista].distancia<<" DE DISTANCIA"<<endl;
	cout<<"LISTA DE SAPOS PARA A CORRIDA:"<<endl;
	for(int i=0;i<cont;i++){
		cout<<sapos[i].getname()<<endl;
	}
	cout<<"*******PREPARAR******"<<endl;
	cout<<"******APONTAR*******"<<endl;
	cout<<"********FOGO!*******"<<endl;

	int d[cont]={};
	int pulo[cont]={};
	int vezes[cont]={};// auxiliar quem ja acabou a corrida
	int aux=0;
	int ganhador[cont];
	ganhador[cont-1]=356;
	int pulinho;
	while(ganhador[cont-1] == 356){
		/**A distancia do pulo será entre 1m e 3m*/
		for(int i=0;i<cont;i++){
			if(d[i]>=pistas[rpista].distancia && vezes[i]==0){
				ganhador[aux]=i;
				vezes[i]=1;
				aux++;
			}else if(vezes[i]==0 && d[i]<pistas[rpista].distancia){
				pulinho=rand()%3+1;
				d[i]+=pulinho;
				sapos[i].setdistancia(d[i]);
				pulo[i]++;
				sapos[i].setpulos(pulo[i]); 
				cout<<"O SAPO "<<sapos[i].getname()<<" PULOU! NUMA DISTANCIA DE "<<pulinho<< "   DISTANCIA PERCORRIDA ATE O MOMENTO: "<<d[i]<<endl;
				if(i==cont-1){
					cout<<"*******************************************"<<endl;
				}
			}
		}
	}
	cout<<"CORRIDA FINALIZADA"<<endl;
	cout<<"***********************************"<<endl;
	cout<<"RANK DA CORRIDA:"<<endl;
	for(int i=0;i<cont;i++){
		cout<<i+1<<" - "<<sapos[ganhador[i]].getname()<<endl;
	}
	sapos[ganhador[0]].setqtdvitorias(1);

	for(int i=0;i<cont;i++){/**RESETANDO OS saposS*/
		sapos[i].setdistancia(0);
		sapos[i].setqtdprovas(1);
		sapos[i].setpulos(0);
	}
}