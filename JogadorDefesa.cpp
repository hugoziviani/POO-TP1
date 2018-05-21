//
// Created by Fred on 29/04/2018.
//

#include "JogadorDefesa.h"

JogadorDefesa::JogadorDefesa(const string& nomeJogador, const string& posicao, int idade, int habilidade, int cobertura, int desarme) {
    Jogador(nomeJogador, posicao, idade, habilidade);
}

int JogadorDefesa::getHabilidade() {
    return habilidade;
}

void JogadorDefesa::setCobertura() {
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1, 100);
    cobertura = dist(mt);
}

void JogadorDefesa::setDesarme() {
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1, 100);
    desarme = dist(mt);
}

void JogadorDefesa::setHabilidade(){
    habilidade = ((habilidade*5) + (cobertura*3) + (desarme*2)) /10;
}