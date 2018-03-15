#include <iostream>
#include <ctime> 
#include <cstdlib>
#include "sapo.h"
using namespace std;
int main(){
	Sapo sapo1;
	char n[30];
	int distancia = 30,d1=0,d2=0,d3=0;
	cout << "Digite o nome do sapo 1: " <<;
	cin>>n;
	sapo1.setnome(n);
	cout << "Digite o nome do sapo 2: " <<;
	cin>>n;
	sapo1.setnome(n);
	cout << "Digite o nome do sapo 3: " <<;
	cin>>n;
	sapo1.setnome(n);
	srand(time(0)); 
	while(pulos<distancia){
		d1+=rand()%3+1;
		sapo1.setdistancia(d1);
		d2+=rand()%3+1;
		sapo2.setdistancia(d2);
		d3+=rand()%3+1;
		sapo3.setdistancia(d3);
	}
	return 0;
}