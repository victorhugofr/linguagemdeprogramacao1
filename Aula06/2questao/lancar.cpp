#include <iostream>
#include <ctime> 
#include <cstdlib>
#include "dado.h"
#include "lancar.h"
using namespace std;
void lancar(int n){
	dado xRan[n];
	int soma=0;
	srand( time(0)); 
	for(int i=0;i<n;i++){
		xRan[i].lado=rand()%6+1; 
		cout << i+1 <<"o dado jogado:" << xRan[i].lado << endl;	
		soma+=xRan[i].lado;
	}
	cout << "Soma dos valores: " << soma << endl;	
}