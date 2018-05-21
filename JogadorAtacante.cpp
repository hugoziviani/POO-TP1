//
// Created by Fred on 29/04/2018.
//

#include "JogadorAtacante.h"

JogadorAtacante::JogadorAtacante(const string& nomeJogador, const string& posicao, int idade, int habilidade, int velocidade, int tecnica) {
    Jogador(nomeJogador, posicao, idade, habilidade);
}

int JogadorAtacante::getHabilidade() {
    return habilidade;
}

void JogadorAtacante::setTecnica(){
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1, 100);
    tecnica = dist(mt);
}

void JogadorAtacante::setVelocidade() {
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1, 100);
    velocidade = dist(mt);
}

void JogadorAtacante::setHabilidade() {
    habilidade = ((habilidade*5) + (velocidade*2) + (tecnica*3)) /10;
}

