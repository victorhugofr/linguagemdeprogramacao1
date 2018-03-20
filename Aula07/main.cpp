#include <iostream>
#include <ctime> 
#include <cstdlib>
#include "sapo.h"
using namespace std;

int main(){
	Sapo sapo1,sapo2,sapo3;
	char name1[30],name2[30],name3[30];
	int distancia = 30,d1=0,d2=0,d3=0,pulo1=0,pulo2=0,pulo3=0,ganhador;
	cout << "Digite o nome do sapo 1: " ;
	cin.getline (name1,30);
	cout << "Digite o nome do sapo 2: " ;
	cin.getline (name2,30);
	cout << "Digite o nome do sapo 3: " ;
	cin.getline (name3,30);
	srand(time(0)); 
	while(d1<distancia || d2 <distancia || d3<distancia){
		d1+=rand()%3+1;
		sapo1.setdistancia(d1);
		pulo1++;
		sapo1.setpulos(pulo1);
		if(d1>=distancia){
			ganhador=1;
			break;
		}


		d2+=rand()%3+1;
		sapo2.setdistancia(d2);
		pulo2++;
		sapo2.setpulos(pulo2);
		if(d2>=distancia){
			ganhador=2;
			break;
		}


		d3+=rand()%3+1;
		sapo3.setdistancia(d3);
		pulo3++;
		sapo3.setpulos(pulo3);
		if(d3>=distancia){
			ganhador=3;
			break;
		}
	}
	if(ganhador==1){
		cout << "O sapo " << name1 << " venceu com " << sapo1.getpulos() <<" pulos, numa corrida de 30m" << endl;
	}
	if(ganhador==2){
		cout << "O sapo " << name2 << " venceu com " << sapo2.getpulos() <<" pulos, numa corrida de 30m" << endl;
	}
	if(ganhador==3){
		cout << "O sapo " << name3 << " venceu com " << sapo3.getpulos() <<" pulos, numa corrida de 30m" << endl;
	}
	return 0;
}
