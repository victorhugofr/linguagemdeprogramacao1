#ifndef PROCEDIMENTOS_HPP 
#define PROCEDIMENTOS_HPP
#include "../include/cd.hpp"
#include "../include/livro.hpp"
#include "../include/dvd.hpp"
#include "../include/acervo.hpp"
#include "../include/produto.hpp"
#include <iostream>
#include <string>
int qualproduto();
int menu();
void lercd(Cd *cd,Acervo *acervo);
void lerlivro(Livro *livro,Acervo *acervo);
void lerdvd(Dvd *dvd,Acervo *acervo);
void deletarcd(Cd *cd,Acervo *acervo);
void deletardvd(Dvd *dvd, Acervo *acervo);
void deletarlivro(Livro *livro, Acervo *acervo);
void editarlivro(Livro *livro,Acervo *acervo);
void editarcd(Cd *cd,Acervo *acervo);
void editardvd(Dvd *dvd,Acervo *acervo);
#endif