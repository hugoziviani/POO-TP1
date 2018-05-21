//
// Created by Fred on 28/04/2018.
//

#include "JogadorGoleiro.h"

JogadorGoleiro::JogadorGoleiro(const string& nomeJogador, const string& posicao, int idade, int habilidade, int reflexos, int altura) {
    Jogador(nomeJogador, posicao, idade, habilidade);
}
int JogadorGoleiro::getHabilidade() {
    return habilidade;
}

void JogadorGoleiro::setReflexos() {
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1, 100);
    reflexos = dist(mt);
}

void JogadorGoleiro::setAltura() {
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(180, 205);
    altura = dist(mt);
}

void JogadorGoleiro::setHabilidade(){
    habilidade = ((habilidade*5) + (((int)(altura*100))*2) + (reflexos * 3))/10;
}