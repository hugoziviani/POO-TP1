//
// Created by Fred on 28/04/2018.
//

#include "Jogador.h"
#include <utility>

Jogador::Jogador(string, string, int, int) :nomeJogador(), posicao(), idade(0), habilidade(0){}

string Jogador::getNome() {
    return nomeJogador;
}

string Jogador::getPosicao() {
    return posicao;
}

int Jogador::getHabilidade() {
    return habilidade;
}

int Jogador::getGols() {
    return gols;
}

int Jogador::getCamisa() {
    return camisa;
}
void Jogador::setName(string nomePlayer) {
    nomeJogador = std::move(nomePlayer);
}

void Jogador::setCamisa(int nCamisa) {
    camisa = nCamisa;
}

void Jogador::setPosicao(string pos) {
    posicao = std::move(pos);
}

void Jogador::somaGol() {
     gols++;
}

void Jogador::setHabilidade() {
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1, 100);
    habilidade = dist(mt);
}


