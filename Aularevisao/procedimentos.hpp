#ifndef PROCEDIMENTOS_HPP
#define PROCEDIMENTOS_HPP
#include "cabecalho.hpp"
#include "conta.hpp"
void criarconta(int n, Conta *conta);
void saque(int agencia,int numero, int s, Conta *conta);
void depositar(int agencia,int numero, int s, Conta *conta);
void emissaosaldo(int agencia,int numero, Conta *conta);
void transferencia(int agencia, Conta *conta,int agencia1, int s);
#endif