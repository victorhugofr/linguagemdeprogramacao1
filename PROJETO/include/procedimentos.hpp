#ifndef PROCEDIMENTOS_HPP
#define PROCEDIMENTOS_HPP
#include "../include/sapo.hpp"
#include "../include/pista.hpp"
#include "../include/nodesapo.hpp"
#include "../include/nodepista.hpp"
#include "../include/listpista.hpp"
#include "../include/listsapo.hpp"
/**
*@brief funcao realiza a inserção da pista no programa
*@details insere a pista na lista encadeada e, ainda, no arquivo txt
*/
void inserirpista(listpista *List,Pista data);
/**
*@brief funcao realiza a inserção do sapo no programa
*@details insere o sapo na lista encadeada e,ainda, no arquivo txt
*/
void inserirsapo(listsapo *List,Sapo data);
/**
*@brief funcao realiza a leitura dos sapos iniciais setados no arquivo sapo.txt do programa
*/
void lersapo(int& cont, listsapo *sapos);
/**
*@brief funcao realiza a leitura das pistas iniciais setadas no arquivo corrida.txt do programa
*/
void lercorrida(int& cont, listpista *pista);
/**
*@brief menu principal de opções
*@details esse menu tem como opçoes: adicionar sapo, adicionar pista, estatistica dos sapos, estatistica das pistas e iniciar uma corrida
*@return opção desejada
*/
int menu();
/**
*@brief Essa função mostra na tela as principais estatísticas dos sapos cadastrados
*@details mostra o nome, a quantidade de provas disputadas e a quantidade de vitorias alcançadas
*/
void estatisticasapo(listsapo *sapos, int cont);
/**
*@brief Essa função mostra na tela as principais estatisticas das pistas
*@details É mostrado os nomes e distancias das pistas cadastradas(todos os atributos)
*/
void estatisticapista(listpista *pistas, int cont);
/**
*@brief Essa função é a corrida propiamente dita.
*@details Implementação da corrida por meio de pulos obtidos de um numero randomico(de 1 a 3), ganha quem ultrapassar ou chegar na distancia da pista primeiro
*/
void corrida(listsapo *sapos, listpista *pistas, int cont, int cont2);
#endif