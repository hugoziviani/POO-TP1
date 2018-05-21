//
// Created by Fred on 28/04/2018.
//

#ifndef POOTP1_TIME_H
#define POOTP1_TIME_H

#include <iostream>
#include <cstring>
#include <vector>
#include "Jogador.h"

using namespace std;

class Time {
    string nomeTime;
    vector <Jogador> vecJogadores;
    int vitorias;
    int derrotas;
    int empates;
    int habilidadeT;
    int sorte;
public:
    Time(string = nullptr, int = 0, int = 0, int = 0, int = 0,int = 0);
    string getNome();
    string getResultados();
    int getHabilidadeT();
    int getSorte();
    void setNome(string &nomeT);
    //void setHabilidadeT();
    void setSorte();
    void imprimeJogadores();
    void somaVitoria();
    void somaDerrota();
    void somaEmpate();
    void inserirJogador(Jogador playerInserir);
};


#endif //POOTP1_TIME_H
