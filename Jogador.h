//
// Created by Fred on 28/04/2018.
//

#ifndef POOTP1_JOGADOR_H
#define POOTP1_JOGADOR_H

#include <iostream>
#include <random>

using namespace std;

class Jogador {
    string nomeJogador;
    string posicao;
    int gols;
    int camisa;
protected:
    int idade;
    int habilidade;

public:
    explicit Jogador(string = nullptr, string = nullptr, int = 0, int = 0);
    string getNome();
    string getPosicao();
    virtual int getHabilidade();
    int getGols();
    int getCamisa();
    void setName(string nomePlayer);
    void setCamisa(int nCamisa);
    void setPosicao(string pos);
    void somaGol();
    virtual void setHabilidade();

};


#endif //POOTP1_JOGADOR_H
