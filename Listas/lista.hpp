#ifndef LISTA_HPP
#define LISTA_HPP
#include <string>
template <class T>
class Listas{
private:
	T *elemento;
	int qtdelementos = 0;
	string tipo;
public:
	void getelemento(int z){
		return this->elemento[z];
	}
	void getqtdelementos(){
		return this->qtdelementos;
	}
	void setelemento(T i,z){
		this->elemento[z]=i;
	}
	void setqtdelementos(int z){
		this->qtdelementos=z;
	}
	void settipo(string z){
		this->tipo = z;
	}
	int procuraelemento(T i, int n)
        {
        	for(int z=0;z<lista[n].getqtdelementos()<z++){
        		if(lista[n].getelemento(int z) == i ){
        			return z;
        		}
        	}
}
};

#endif