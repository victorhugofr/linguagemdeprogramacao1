#include <iostream>
#include <ctime> 
#include <cstdlib>
#include "dado.h"
using std::cin;
using std::cout;
using std::endl;

int main ()
{
	int n;
	cout << "Quantidade de lançamentos: ";
	cin>>n;
	dado xRan[n];
	srand( time(0)); 
	for(int i=0;i<n;i++){
		xRan[i].lado=rand()%6+1; 
		cout << i+1 <<"o dado jogado:" << xRan[i].lado << endl;	

	}
	
	
	return 0;
}