#ifndef PROCEDIMENTOS_HPP
#define PROCEDIMENTOS_HPP
#include <iostream>
#include <string>
#include "pizza.hpp"
#include "celular.hpp"
#include "carro.hpp"
#include "refrigerante.hpp"
#include "livro.hpp"
#include "chocolate.hpp"
#include "procedimentos.hpp"
#include "deposito.hpp"
int qualproduto();
int menu();
void lerpizza(Pizza *pizza, Deposito *deposito,int pic, int dec);
void lerrefrigerante(Refrigerante *refrigerante, Deposito *deposito,int rec, int dec);
void lerchocolate(Chocolate *chocolate, Deposito *deposito,int chc, int dec);
void lercarro(Carro *carro, Deposito *deposito,int chc, int dec);
void lerlivro(Livro *livro, Deposito *deposito,int lic, int dec);
void lercelular(Celular *celular, Deposito *deposito,int cec, int dec);
void deletarpizza(Pizza *pizza, Deposito *deposito, int pic,int dec);
void deletarrefrigerante(Refrigerante *refrigerante, Deposito *deposito, int rec,int dec);
void deletarchocolate(Chocolate *chocolate, Deposito *deposito, int chc,int dec);
#endif