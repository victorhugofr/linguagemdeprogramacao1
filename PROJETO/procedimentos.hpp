#ifndef PROCEDIMENTOS_HPP
#define PROCEDIMENTOS_HPP
#include "sapo.hpp"
#include "pista.hpp"
typedef struct _nodesapo { //NODE
    Sapo data;
    struct _nodesapo *prox;
}nodesapo;

typedef struct _listasapo { //LIST
    nodesapo *begin = NULL;
    nodesapo *end = NULL;
}listsapo; 
typedef struct _nodepista { //NODE
    Pista data;
    struct _nodepista *prox;
}nodepista;

typedef struct _listapista { //LIST
    nodepista *begin = NULL;
    nodepista *end = NULL;
}listpista; 
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
*@brief menu principal de opções
*@details esse menu tem como opçoes: adicionar sapo, adicionar pista, estatistica dos sapos, estatistica das pistas e iniciar uma corrida
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
void corrida(listsapo *sapos, listpista *pistas, int cont, int cont2);
#endif