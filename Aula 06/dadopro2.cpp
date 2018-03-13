#include <iostream>
#include <ctime> 
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;
class dado{
public:
	int lado;
};

int main ()
{
	int n,soma=0;
	cout << "Quantidade de lançamentos: ";
	cin>>n;
	dado xRan[n];
	srand( time(0)); 
	for(int i=0;i<n;i++){
		xRan[i].lado=rand()%6+1; 
		cout << i+1 <<"o dado jogado:" << xRan[i].lado << endl;	
		soma+=xRan[i].lado;
	}
	cout << "Soma dos valores: " << soma << endl;	
	
	return 0;
}