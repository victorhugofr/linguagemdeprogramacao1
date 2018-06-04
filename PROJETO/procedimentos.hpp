#ifndef PROCEDIMENTOS_HPP
#define PROCEDIMENTOS_HPP
#include "sapo.hpp"
#include "pista.hpp"
/**
*@brief funcao realiza a corrida e retorna o ganhador
*@details a cada rodada o pulo do sapo varia aleatoriamente entre 1m e 3m, o sapo que completar o percurso é o vencedor
*/
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
void removersapocorrida(listsapo *List, listsapo *temp2,int i);
int menu();
void estatisticasapo(Sapo *sapos, int cont);
void estatisticapista(Pista *pistas, int cont);
void corrida(listsapo *sapos, listpista *pistas, int cont, int cont2);
#endif