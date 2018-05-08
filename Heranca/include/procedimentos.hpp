#ifndef PROCEDIMENTOS_HPP
#define PROCEDIMENTOS_HPP
#include <iostream>
#include <string>
#include "../include/pizza.hpp"
#include "../include/celular.hpp"
#include "../include/carro.hpp"
#include "../include/refrigerante.hpp"
#include "../include/livro.hpp"
#include "../include/chocolate.hpp"
#include "../include/procedimentos.hpp"
#include "../include/deposito.hpp"
int qualproduto();
int menu();
void lerpizza(Pizza *pizza, Deposito *deposito,int pic, int dec);
void lerrefrigerante(Refrigerante *refrigerante, Deposito *deposito,int rec, int dec);
void lerchocolate(Chocolate *chocolate, Deposito *deposito,int chc, int dec);
void lercarro(Carro *carro, Deposito *deposito,int chc, int dec);
void lerlivro(Livro *livro, Deposito *deposito,int lic, int dec);
void lercelular(Celular *celular, Deposito *deposito,int cec, int dec);
void deletarpizza(Pizza *pizza, int pic);
void deletarrefrigerante(Refrigerante *refrigerante, int rec);
void deletarchocolate(Chocolate *chocolate, int chc);
void deletarcarro(Carro *carro, int cac);
void deletarlivro(Livro *livro, int lic);
void deletarcelular(Celular *celular, int cec);
#endif