#include <iostream>
#include "../include/conta.hpp"
int Conta::getagencia(){return agencia;}
int Conta::getnumero(){return numero;}
int Conta::getsaldo(){return saldo;}
void Conta::setagencia(int a){agencia=a;}
void Conta::setnumero(int a){numero=a;}
void Conta::setsaldo(int a){saldo=a;}