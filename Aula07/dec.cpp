#include <iostream>
#include <ctime> 
#include <cstdlib>
#include "sapo.h"
using namespace std;

int Sapo::getpulos(){ return pulos;}
void Sapo::setpulos(int p){pulos = p;}
int Sapo::getdistancia(){ return distancia;}
void Sapo::setdistancia(int d){distancia = d;}
char Sapo::getnome(){return nome;}
void Sapo::setnome(char n[30]){nome=n;}