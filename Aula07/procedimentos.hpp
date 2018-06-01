#ifndef PROCEDIMENTOS_HPP
#define PROCEDIMENTOS_HPP
#include "sapo.hpp"
#include "pista.hpp"
/**
*@brief funcao realiza a corrida e retorna o ganhador
*@details a cada rodada o pulo do sapo varia aleatoriamente entre 1m e 3m, o sapo que completar o percurso é o vencedor
*/
int menu();
void estatisticasapo(Sapo *sapos, int cont);
void estatisticapista(Pista *pistas, int cont);
void corrida(Sapo *sapos, Pista *pistas, int cont, int cont2);
#endif
